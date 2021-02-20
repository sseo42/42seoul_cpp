#ifndef ITER_HPP
# define ITER_HPP

template< typename A, typename B, typename C >
void iter(A first_param, B second_param, C third_param)
{
    for (B it = 0; it < second_param; it++)
    {
        third_param(first_param[it]);
    }
}

#endif