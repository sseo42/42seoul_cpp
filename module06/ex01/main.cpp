#include "Data.hpp"

int         main(void)
{
    void    *tester = serialize();

    Data    *sample = deserialize(tester);

    std::cout << sample->s1 << "  " << sample->n << "  " << sample->s2 << std::endl;
    
    delete tester;
    delete sample;
    return (0);
}
