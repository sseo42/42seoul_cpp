#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

static Form     *createPresidentialPardonForm(std::string const &type) {return (new PresidentialPardonForm(type));};
static Form     *createRobotomyRequestForm(std::string const &type) {return (new RobotomyRequestForm(type));};
static Form     *createShrubberyCreationForm(std::string const &type) {return (new ShrubberyCreationForm(type));};

Intern::Intern()
{
    matchingArr[0]._strKey = "presidential pardon";
    matchingArr[0]._func = &createPresidentialPardonForm;
    matchingArr[1]._strKey = "robotomy request";
    matchingArr[1]._func = &createRobotomyRequestForm;
    matchingArr[2]._strKey = "shurbbery creation";
    matchingArr[2]._func = &createShrubberyCreationForm;
}

Intern::~Intern() {}

Intern::Intern(Intern const &copy)
{
    for (int i = 0; i < form_size; i++)
    {
        matchingArr[i]._strKey = copy.getMatching(i)._strKey;
        matchingArr[i]._func = copy.getMatching(i)._func;
    }
}

Intern const &Intern::operator = (Intern const &obj)
{
    if (this == &obj)
        return (*this);
    for (int i = 0; i < form_size; i++)
    {
        matchingArr[i]._strKey = obj.getMatching(i)._strKey;
        matchingArr[i]._func = obj.getMatching(i)._func;
    }
    return (*this);
}

Form    *Intern::makeForm(std::string const &name, std::string const &target)
{
    for (int i = 0; i < form_size; i++)
    {
        if (matchingArr[i]._strKey == name)
        {
            std::cout << "Intern creates " << name << std::endl;
            return (matchingArr[i]._func(target));
        }
    }
    std::cout << "Can't find that form" << std::endl;
    return (0);
}

t_str2func const &Intern::getMatching(int idx) const
{
    return (matchingArr[idx]);
}