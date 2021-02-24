#ifndef RobotomyRequestForm_HPP
# define RobotomyRequestForm_HPP

# include "Form.hpp"

class   RobotomyRequestForm : public Form
{
	private:
        RobotomyRequestForm();

    public:
        RobotomyRequestForm(std::string const &type);
        ~RobotomyRequestForm();
        RobotomyRequestForm(RobotomyRequestForm const &copy);
        RobotomyRequestForm const &operator = (RobotomyRequestForm const &obj);

        void        action(Bureaucrat const &executor) const;
};

#endif
