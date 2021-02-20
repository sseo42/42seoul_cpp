#include "Data.hpp"

int         main(void)
{
    void    *tester = serialize();

    Data    *sample = deserialize(tester);

    char    *seo = (char *)tester;

    for (int i = 0; i < 20; i++)
    {
        std::cout << "test: " << *(seo + i) << std::endl;
    }
    std::cout << "---------------------------------------" << std::endl;
    std::cout << sample->s1 << "  " << sample->n << "  " << sample->s2 << std::endl;
    
    delete seo;
    delete sample;
    return (0);
}