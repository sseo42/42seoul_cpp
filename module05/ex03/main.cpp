#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int         main(void)
{
    Bureaucrat      sseo("aha", 60);
    Intern  someRandomIntern;
    Intern  clone_intern(someRandomIntern);
    Form    *rrf, *rra;

    rrf = someRandomIntern.makeForm("robotomy request", "Bender");
    rra = clone_intern.makeForm("presidential pardon", "tester");

    sseo.signForm(*rrf);
    sseo.executeForm(*rrf);
    sseo.signForm(*rra);
    sseo.executeForm(*rra);

    delete rrf;
    delete rra;

    return (0);
}
