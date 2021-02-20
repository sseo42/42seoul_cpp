#include "Data.hpp"

void        *serialize(void)
{
    char    c;
    char    *out = new char[20];

    for (int i = 0; i < 24; i++)
    {
        srand(time(NULL) * 2 + i);
        c = (rand() % 26 + 65);
        *(out + i) = c;
    }
    /*
    int     *num_p;
    num_p = (int *)(out + 8);
    *num_p = (65 << 24) + (65 << 16) + (65 << 8) + 65;
    */
    return ((void *)out);
}

Data        *deserialize(void * raw)
{
    char    *target = (char *)raw;
    Data    *decoder = new Data();

    for (int i = 0; i < 8; i++)
    {
        decoder->s1 += *(target + i);
        decoder->s2 += *(target + i + 12);
        decoder->n = *(int *)(target + 8);
    }

    return (decoder);
}