#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <set>

#ifndef UINT_MAX
# define UINT_MAX 4294967295
#endif

class Span
{
    private:
        Span();
        unsigned int            _size;
        std::multiset< int >    storage;

    public:
        Span(unsigned int N);
        ~Span();
        Span(Span const &copy);
        Span const &operator = (Span const &obj);

        void addNumber(int number);
        unsigned int shortestSpan(void) const;
        unsigned int longestSpan(void) const;

        template< typename InputIter >
        void addNumber(InputIter begin, InputIter end)
        {
            size_t  target_amount = std::distance(begin, end);

            if ((size_t)_size < target_amount + storage.size())
                throw AddException();
            storage.insert(begin, end);
        };

        class NoSpanException : public std::exception
        {
            virtual const char *what() const throw();
        };

        class AddException : public std::exception
        {
            virtual const char *what() const throw();
        };
};

#endif
