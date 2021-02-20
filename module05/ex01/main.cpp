#include "Bureaucrat.hpp"
#include "Form.hpp"

int         main(void)
{
    try
    {
        Bureaucrat  student1("Seo", 120);
        Form        task1("usual task", 130);
        Form        task2("hard task", 10);

        std::cout << student1 << std::endl;
        student1.signForm(task1);
        student1.signForm(task2);
        std::cout << task1 << std::endl;

        Form        task3("impossible task", 0);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
        
    }
    
    return (0);
}