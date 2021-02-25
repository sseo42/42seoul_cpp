#include "Array.hpp"
#include <iostream>

int     main(void)
{
    Array<int>   test(10);

    test[0] = 1;
    test[5] = 100;
	std::cout << "---------test operator[]---------------" << std::endl;
    for (int i = 0; i < 10; i++)
    {
        std::cout << "val[" << i << "] -> " << test[i] << std::endl;
    }

    try
    {
        std::cout << "*** test error ***" << test[11] << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }

	Array<int>	test_copy(test);
	std::cout << "-----------------test copy-----------------" << std::endl;
    for (int i = 0; i < 10; i++)
    {
        std::cout << "test copy: " << test_copy[i] << std::endl;
    }

	test_copy[2] = 1004;
	test = test_copy;
	std::cout << "-----------------test assignation-----------------" << std::endl;
    for (int i = 0; i < 10; i++)
    {
        std::cout << "test assignation: " << test[i] << std::endl;
    }
    return (0);
}
