#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base        *generate(void)
{
    static unsigned int     my_seed;
    unsigned int            chice;

    srand(time(NULL) + my_seed);
    chice = (unsigned int)rand() % 3;
    my_seed++;
    if (!chice)
        return (new A());
    else if (chice == 1)
        return (new B());
    else
        return (new C());
}

void        identify_from_pointer( Base *p )
{
    if (dynamic_cast<A *>(p))
        std::cout << "A" << std::endl;
    else if (dynamic_cast<B *>(p))
        std::cout << "B" << std::endl;
    else
        std::cout << "C" << std::endl;
}

void        identify_from_reference( Base &p )
{
    identify_from_pointer(&p);
}