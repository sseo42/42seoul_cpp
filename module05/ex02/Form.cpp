#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form() : _name("None"), _grade4sign(0), _grade4exec(0) {}

Form::Form(std::string const &name, int grade4sign, int grade4exec, std::string const &target) :
    _name(name),
    _grade4sign(grade4sign),
    _grade4exec(grade4exec)
{
    if (grade4sign < TOP_GRADE || _grade4exec < TOP_GRADE)
        throw Form::GradeTooHighException();
    else if (grade4sign > BOTTOM_GRADE || _grade4exec > BOTTOM_GRADE)
        throw Form::GradeTooLowException();
    _target = target;
    _sign = false;
}

Form::Form(Form const &copy) :
    _name(copy.getName()),
    _grade4sign(copy.getGrade4sign()),
    _grade4exec(copy.getGrade4exec())
{
    _target = copy.getTarget();
    _sign = copy.getSign();
}

Form const &Form::operator = (Form const &obj)
{
    if (this == &obj)
		return (*this);
    _target = obj.getTarget();
    _sign = obj.getSign();
    return (*this);
}

std::string     Form::getName(void) const
{
    return (_name);
}

int             Form::getGrade4sign(void) const
{
    return (_grade4sign);
}

int             Form::getGrade4exec(void) const
{
    return (_grade4exec);
}

bool            Form::getSign(void) const
{
    return (_sign);
}
std::string const & Form::getTarget(void) const
{
    return (_target);
}

void            Form::setSign(bool tf)
{
    _sign = tf;
}

void            Form::setTarget(std::string const &target)
{
    _target = target;
}

void            Form::beSigned(Bureaucrat const &officer)
{
    if (officer.getGrade() > _grade4sign)
        throw Form::GradeTooLowException("Not sufficient grade to sign");
    else
        _sign = true;
}

void            Form::execute(Bureaucrat const &executor) const
{
    if (!_sign)
        throw Form::GradeTooLowException("It's not signed");
    else
        action(executor);
}

Form::GradeTooHighException::GradeTooHighException() throw() : _msg("Too High Grade For <Form>") {}

Form::GradeTooHighException::GradeTooHighException(std::string const &msg) throw() : _msg(msg) {}

Form::GradeTooHighException::~GradeTooHighException() throw() {}

const char *Form::GradeTooHighException::what() const throw()
{
    return (_msg.c_str());
}

Form::GradeTooLowException::GradeTooLowException() throw() : _msg("Too Low Grade For <Form>") {}

Form::GradeTooLowException::GradeTooLowException(std::string const &msg) throw() : _msg(msg) {}

Form::GradeTooLowException::~GradeTooLowException() throw() {}

const char *Form::GradeTooLowException::what() const throw()
{
    return (_msg.c_str());
}

std::ostream &operator << (std::ostream &os, Form const &obj)
{
    if (obj.getSign())
        os << "<" << obj.getName() << ">, grade <" << obj.getGrade4sign() << "/" << obj.getGrade4exec() << "> is signed, target: " << obj.getTarget();
    else
        os << "<" << obj.getName() << ">, grade <" << obj.getGrade4sign() << "/" << obj.getGrade4exec() << "> is not signed, target: " << obj.getTarget();
    return (os);
}
