#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string const &type) : Form("PresidentialPardonForm", 25, 5, type) {}

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &copy) : Form(copy) {}

PresidentialPardonForm const &PresidentialPardonForm::operator = (PresidentialPardonForm const &obj)
{
    if (this == &obj)
		return (*this);
    setTarget(obj.getTarget());
    setSign(obj.getSign());
    return (*this);
}

void                PresidentialPardonForm::action(Bureaucrat const &executor) const
{
    if (executor.getGrade() > getGrade4exec())
        throw Form::GradeTooLowException("Not sufficient grade to exec");
    std::cout << "<" << getTarget() <<"> has been pardoned by Zafod Beeblebrox" << std::endl;
}
