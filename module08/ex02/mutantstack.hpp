#ifndef Mutantstack_HPP
# define Mutantstack_HPP

# include <iostream>
# include <stack>
# include <list>

template< typename T, typename _Container = std::stack<T>, typename _sequence = std::deque<T> >
class MutantStack : public _Container
{
    public:
        typedef typename _sequence::iterator                    iterator;
        typedef typename _sequence::const_iterator              const_iterator;
        typedef typename _sequence::const_reverse_iterator      const_reverse_iterator;
        typedef typename _sequence::reverse_iterator            reverse_iterator;

        MutantStack()
        : _Container() { }

        ~MutantStack() { }

        MutantStack(MutantStack const &copy) : _Container(copy) {}

		MutantStack const &operator=(MutantStack<T> const &obj)
		{
			if (this == &obj)
				return (*this);
			while (!this->empty())
				this->pop();
			for (const_iterator it = obj.begin(); it != obj.end(); it++)
				this->push(*it);
			return (*this);
		}

        iterator
        begin() _GLIBCXX_NOEXCEPT
        { return _Container::c.begin(); }

        const_iterator
        begin() const _GLIBCXX_NOEXCEPT
        { return _Container::c.begin(); }

        iterator
        end() _GLIBCXX_NOEXCEPT
        { return _Container::c.end(); }

        const_iterator
        end() const _GLIBCXX_NOEXCEPT
        { return _Container::c.end(); }

        reverse_iterator
        rbegin() _GLIBCXX_NOEXCEPT
        { return _Container::c.rbegin(); }

        const_reverse_iterator
        rbegin() const _GLIBCXX_NOEXCEPT
        { return _Container::c.rbegin(); }

        reverse_iterator
        rend() _GLIBCXX_NOEXCEPT
        { return _Container::c.rend(); }

        const_reverse_iterator
        rend() const _GLIBCXX_NOEXCEPT
        { return _Container::c.rend(); }
};

#endif
