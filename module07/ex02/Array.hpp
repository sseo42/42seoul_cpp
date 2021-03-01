#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template< typename T >
class Array
{
    private:
        T               *_arr;
        unsigned int    _size;

    public:
		Array() : _arr(new T[0]), _size(0) {};

        Array(unsigned int n)
        {
            _size = n;
            _arr = new T[_size];
        };

        ~Array()
        {
            delete[] _arr;
        };

        Array(Array const &copy)
        {
			_size = copy.size();
			_arr = new T[_size];
            for (unsigned int idx = 0; idx < _size; idx++)
                _arr[idx] = copy.getVal(idx);
        };

        Array const &operator = (Array const &obj)
        {
            if (this == &obj)
                return (*this);
            delete[] _arr;
            _size = obj.size();
            _arr = new T[_size];
            for (unsigned int idx = 0; idx < _size; idx++)
                _arr[idx] = obj.getVal(idx);
			return (*this);
        };

        T &operator [](unsigned int i)
        {
            if (i < _size)
                return (_arr[i]);
            else
                throw Array::RangeException();
        };

        size_t size(void) const
        {
            return (_size);
        };

		T getVal(unsigned int i) const
		{
			if (i < _size)
				return (_arr[i]);
			else
				throw Array::RangeException();
		};

        class RangeException : public std::exception
        {
            public:
                RangeException() throw() {};
                virtual ~RangeException() throw() {};
                virtual const char *what() const throw()
                {
                    return ("Out of range");
                };
        };
};

#endif
