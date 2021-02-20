#include <iostream>
#include "whatever.hpp"

int     main(void)
{
    int a_int = 3, b_int = 4;
    double a_double = 1.234, b_double = 1.234;
    char    a_char = 65, b_char = 66;
    std::string    a_str = "abcd", b_str = "efg";

    std::cout << "origin->     A: " << a_str << "\tB: " << b_str << std::endl;
    swap(a_str, b_str);
    std::cout << "after swap-> A: " << a_str << "\tB: " << b_str << std::endl;
    std::cout << std::endl;

    std::cout << "origin->     A: " << a_int << "\tB: " << b_int << std::endl;
    swap(a_int, b_int);
    std::cout << "after swap-> A: " << a_int << "\tB: " << b_int << std::endl;
    std::cout << std::endl;

    std::cout << "origin->     A: " << a_double << "\tB: " << b_double << std::endl;
    std::cout << "min val: " << min(a_double, b_double) << std::endl;
    std::cout << std::endl;

    std::cout << "origin-> A: " << a_char << "\tB: " << b_char << std::endl;
    std::cout << "max val: " << max(a_char, b_char) << std::endl;
    std::cout << std::endl;
    
	std::cout << "----------------------------------------------------" << std::endl;
	int a = 2;
	int b = 3;

	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;

	std::string c = "chaine1";
	std::string d = "chaine2";

	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

    return (0);
}
