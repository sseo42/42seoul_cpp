#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string const &name, int grade) : _name(name)
{
    if (grade < TOP_GRADE)
        throw Bureaucrat::GradeTooHighException();
    else if (grade > BOTTOM_GRADE)
        throw Bureaucrat::GradeTooLowException();
    else
        _grade = grade;
}

Bureaucrat::~Bureaucrat() {}

Bureaucrat::Bureaucrat(Bureaucrat const &copy) : _name(copy.getName())
{
    _grade = copy.getGrade();
}

Bureaucrat const &Bureaucrat::operator = (Bureaucrat const &obj)
{
	if (this == &obj)
		return (*this);
    _grade = obj.getGrade();
    return (*this);
}

std::string     Bureaucrat::getName(void) const
{
    return (_name);
}

int             Bureaucrat::getGrade(void) const
{
    return (_grade);
}

void            Bureaucrat::increaseGrade(void)
{
    if ( _grade - 1 < TOP_GRADE )
        throw Bureaucrat::GradeTooHighException();
    else
        _grade--;
}

void            Bureaucrat::decreaseGrade(void)
{
    if ( _grade + 1 > BOTTOM_GRADE )
        throw Bureaucrat::GradeTooLowException();
    else
        _grade++;
}

Bureaucrat::GradeTooHighException::GradeTooHighException() throw() {}

Bureaucrat::GradeTooHighException::~GradeTooHighException() throw() {}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
    return ("Too High Grade");
}

Bureaucrat::GradeTooLowException::GradeTooLowException() throw() {}

Bureaucrat::GradeTooLowException::~GradeTooLowException() throw() {}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
    return ("Too Low Grade");
}

std::ostream &operator << (std::ostream &os, Bureaucrat const &obj)
{
    os << "<" << obj.getName() << ">, bureaucrat grade <" << obj.getGrade() << ">.";
    return (os);
}
