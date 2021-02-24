#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("None", 0, 0, "None") {}

RobotomyRequestForm::RobotomyRequestForm(std::string const &type) : Form("RobotomyRequestForm", 72, 45, type) {}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &copy) : Form(copy) {}

RobotomyRequestForm const &RobotomyRequestForm::operator = (RobotomyRequestForm const &obj)
{
	if (this == &obj)
        return (*this);
    setTarget(obj.getTarget());
    setSign(obj.getSign());
    return (*this);
}

void                RobotomyRequestForm::action(Bureaucrat const &executor) const
{
    srand(time(NULL));
    if (executor.getGrade() > getGrade4exec())
        throw Form::GradeTooLowException("Not sufficient grade to exec");
    else if (rand() % 2)
        std::cout << "<" << getTarget() << "> has been robotomized successfully" << std::endl;
    else
        std::cout << "failed to robotomize <" << getTarget() << ">" << std::endl;
}
