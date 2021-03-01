#include "span.hpp"
#include <vector>

int main()
{
    Span sp = Span(5);
    sp.addNumber(5);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;

    std::cout << "===================my test======================" << std::endl;

    Span my_sp = Span(UINT_MAX);
    std::vector< int >   v;

    v.push_back(2147483647);
    for (int i = -2147483648; i < -2141000000; i++)
        v.push_back(i);
    std::cout << "================created vector==================" << std::endl;
    my_sp.addNumber(v.begin(), v.end());
    std::cout << "================finished adding==================" << std::endl;
    std::cout << my_sp.shortestSpan() << std::endl;
    std::cout << my_sp.longestSpan() << std::endl;
}