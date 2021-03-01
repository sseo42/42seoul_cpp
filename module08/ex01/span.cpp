#include "span.hpp"

Span::Span() {}

Span::Span(unsigned int N)
{
    _size = N;
}

Span::~Span()
{
    storage.clear();
}


Span::Span(Span const &copy)
{
    *this = copy;
}

Span const &Span::operator = (Span const &obj)
{
    if (this == &obj)
        return (*this);
    _size = obj._size;
	storage.clear();
    storage = obj.storage;
    return (*this);
}

void Span::addNumber(int number)
{
    if (storage.size() < _size)
        storage.insert(number);
    else
        throw Span::AddException();
}

unsigned int Span::shortestSpan(void) const
{
    unsigned int    minVal = UINT_MAX;

    if (storage.size() < 2)
        throw Span::NoSpanException();

    std::multiset< int >::iterator it = storage.begin();
    int left = *it;
    int right;
    while (++it != storage.end())
    {
        right = *it;
        if ((unsigned int)(right - left) < minVal)
            minVal = (unsigned int)(right - left);
        left = right;
    }
    return (minVal);
}

unsigned int Span::longestSpan(void) const
{
    if (storage.size() < 2)
        throw Span::NoSpanException();
    return ((unsigned int)(*(storage.rbegin()) - *(storage.begin())));
}

const char *Span::NoSpanException::what() const throw()
{
    return ("No span to find");
}

const char *Span::AddException::what() const throw()
{
    return ("No space to add value");
}
