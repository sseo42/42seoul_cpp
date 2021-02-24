#include "Data.hpp"

void        *serialize(void)
{
	Data	*myData = new Data;

    for (int i = 0; i < 8; i++)
    {
        srand(time(NULL) * 2 + i);
        myData->s1 += static_cast<char>(rand() % 26 + 65);
    }
	myData->n = static_cast<int>(rand());
    for (int i = 8; i < 16; i++)
    {
        srand(time(NULL) * 2 + i);
        myData->s2 += static_cast<char>(rand() % 26 + 65);
    }
    /*
    int     *num_p;
    num_p = (int *)(out + 8);
    *num_p = (65 << 24) + (65 << 16) + (65 << 8) + 65;
    */
    return (reinterpret_cast<void *>(myData));
}

Data        *deserialize(void * raw)
{
    Data    *decode = new Data();

    decode->s1 += std::string(reinterpret_cast<char *>raw + 1, 8);
    decode->s2 += std::string(reinterpret_cast<char *>raw + 33, 8);
    decode->n = *(reinterpret_cast<int *>raw + 8);

    return (decode);
}
