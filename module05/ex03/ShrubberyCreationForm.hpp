#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <fstream>
# include "Form.hpp"

class   ShrubberyCreationForm : public Form
{
	private:
        ShrubberyCreationForm();

    public:
        ShrubberyCreationForm(std::string const &type);
        ~ShrubberyCreationForm();
        ShrubberyCreationForm(ShrubberyCreationForm const &copy);
        ShrubberyCreationForm const &operator = (ShrubberyCreationForm const &obj);

        void        action(Bureaucrat const &executor) const;
};

#endif
