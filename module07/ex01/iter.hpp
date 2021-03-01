#ifndef ITER_HPP
# define ITER_HPP

template< typename T >
void iter(T *array, size_t size, void (*func)(T const &))
{
    for (size_t it = 0; it < size; it++)
    {
        func(array[it]);
    }
}

template< typename T>
void iter(T *array, size_t size, void (*func)(T &))
{
    for (size_t it = 0; it < size; it++)
    {
        func(array[it]);
    }
}

#endif
