#ifndef PresidentialPardonForm_HPP
# define PresidentialPardonForm_HPP

# include "Form.hpp"

class   PresidentialPardonForm : public Form
{
	private:
        PresidentialPardonForm();

    public:
        PresidentialPardonForm(std::string const &type);
        ~PresidentialPardonForm();
        PresidentialPardonForm(PresidentialPardonForm const &copy);
        PresidentialPardonForm const &operator = (PresidentialPardonForm const &obj);

        void        action(Bureaucrat const &executor) const;
};

#endif
