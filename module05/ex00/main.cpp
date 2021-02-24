#include "Bureaucrat.hpp"

int         main(void)
{
    try
    {
        Bureaucrat  student1("Seo", 151);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
        try
        {
            Bureaucrat student2("BB", 3);
            std::cout << student2 << std::endl;
            student2.increaseGrade();
            student2.increaseGrade();
            student2.increaseGrade();
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << std::endl;
        }
        
    }
    
    return (0);
}
