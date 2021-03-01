
#include <iostream>
#include <vector>
#include <deque>
#include <list>
#include "easyfind.hpp"

int     main(void)
{
    std::vector< int >      v;
    std::vector< int >::iterator v_it;
    int     target1 = 4;
    int     target2 = 11;

    std::cout << "===================create vector container 0-9===================" << std::endl;
    for (int i = 0; i < 10; i++)
        v.push_back(i);

    std::cout << "===================vector test seaching 4 and 11===================" << std::endl;
    v_it = easyfind(v, target1);
    if (v_it == v.end())
        std::cout << "Not found: " << target1 << std::endl;
    else
        std::cout << "get ans: " << *v_it << std::endl;
    v_it = easyfind(v, target2);
    if (v_it == v.end())
        std::cout << "Not found: " << target2 << std::endl;
    else
        std::cout << "get ans: " << *v_it << std::endl;

    std::deque< int >       dq;
    std::deque< int >::iterator dq_it;
    target1 = 12;
    target2 = 1;

    std::cout << "===================create deque container 0-9===================" << std::endl;
    for (int i = 0; i < 10; i++)
        dq.push_back(i);

    std::cout << "===================deque test seaching 12 and 1===================" << std::endl;
    dq_it = easyfind(dq, target1);
    if (dq_it == dq.end())
        std::cout << "Not found: " << target1 << std::endl;
    else
        std::cout << "get ans: " << *dq_it << std::endl;
    dq_it = easyfind(dq, target2);
    if (dq_it == dq.end())
        std::cout << "Not found: " << target2 << std::endl;
    else
        std::cout << "get ans: " << *dq_it << std::endl;

    std::list< int >       l;
    std::list< int >::iterator l_it;
    target1 = -1;
    target2 = 0;

    std::cout << "===================create list container 0-9===================" << std::endl;
    for (int i = 0; i < 10; i++)
        l.push_back(i);

    std::cout << "===================list test seaching -1 and 0===================" << std::endl;
    l_it = easyfind(l, target1);
    if (l_it == l.end())
        std::cout << "Not found: " << target1 << std::endl;
    else
        std::cout << "get ans: " << *l_it << std::endl;
    l_it = easyfind(l, target2);
    if (l_it == l.end())
        std::cout << "Not found: " << target2 << std::endl;
    else
        std::cout << "get ans: " << *l_it << std::endl;
    return (0);
}