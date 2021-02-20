#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int         main(void)
{
    Bureaucrat      tester("tester", 1);

    ShrubberyCreationForm   task("task");
    PresidentialPardonForm   task2("task2");
    RobotomyRequestForm   task3("task3");

    tester.signForm(task);
    tester.executeForm(task);
    
    tester.signForm(task2);
    tester.executeForm(task2);

    tester.signForm(task3);
    tester.executeForm(task3);

    std::cout << task << '\n' << task2 << '\n' << task3 << std::endl;

    Bureaucrat      dummy("dummy", 60);

    ShrubberyCreationForm   sample("sample");
    PresidentialPardonForm   sample2("sample2");
    RobotomyRequestForm   sample3("sample3");

    dummy.signForm(sample);
    dummy.executeForm(sample);
    
    dummy.signForm(sample2);
    dummy.executeForm(sample2);

    dummy.signForm(sample3);
    dummy.executeForm(sample3);
    
    return (0);
}
