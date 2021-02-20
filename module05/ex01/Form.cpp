#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(std::string const &name, int grade) :
    _name(name),
    _grade(grade)
{
    if (grade < TOP_GRADE)
        throw Form::GradeTooHighException();
    else if (grade > BOTTOM_GRADE)
        throw Form::GradeTooLowException();
    _sign = false;
}

Form::~Form() {}

Form::Form(Form const &copy) :
    _name(copy.getName()),
    _grade(copy.getGrade())
{
    _sign = copy.getSign();
}

Form const &Form::operator = (Form const &obj)
{
	if (this == &obj)
		return (*this);
    _sign = obj.getSign();
    return (*this);
}

std::string     Form::getName(void) const
{
    return (_name);
}

int             Form::getGrade(void) const
{
    return (_grade);
}

bool            Form::getSign(void) const
{
    return (_sign);
}

void            Form::beSigned(Bureaucrat const &officer)
{
    if (officer.getGrade() > _grade)
        throw Form::GradeTooLowException();
    else
        _sign = true;
}

Form::GradeTooHighException::GradeTooHighException() throw() {}

Form::GradeTooHighException::~GradeTooHighException() throw() {}

const char *Form::GradeTooHighException::what() const throw()
{
    return ("Too High Grade For <Form>");
}

Form::GradeTooLowException::GradeTooLowException() throw() {}

Form::GradeTooLowException::~GradeTooLowException() throw() {}

const char *Form::GradeTooLowException::what() const throw()
{
    return ("Too Low Grade For <Form>");
}

std::ostream &operator << (std::ostream &os, Form const &obj)
{
    if (obj.getSign())
        os << "<" << obj.getName() << ">, form grade <" << obj.getGrade() << "> is signed.";
    else
        os << "<" << obj.getName() << ">, form grade <" << obj.getGrade() << "> is not signed.";
    return (os);
}
