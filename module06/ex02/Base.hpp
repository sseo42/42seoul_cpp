#ifndef BASE_HPP
# define BASE_HPP

# include <iostream>
# include <cstdlib>
# include <ctime>

class Base
{
    public:
        virtual ~Base() {};
};

Base        *generate(void);
void        identify_from_pointer(Base * p);
void        identify_from_reference( Base & p);

#endif