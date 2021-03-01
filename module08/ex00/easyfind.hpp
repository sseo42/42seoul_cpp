#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <algorithm>

template < typename T >
typename T::iterator easyfind(T &container, int target)
{
    typename T::iterator out;

    return (std::find(container.begin(), container.end(), target));
};

#endif