#include <iostream>
#include "iter.hpp"

void    test_f(char &c)
{
    c += 1;
}

int     main(void)
{
    char    ch_arr[10] = "abcdefghi";

    iter(ch_arr, 9, test_f);

    for (int i = 0; i < 9; i++)
    {
        std::cout << "test: " << ch_arr[i] << std::endl;
    }
    return (0);
}
