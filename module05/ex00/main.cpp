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
            Bureaucrat student2("BB", 149);
            std::cout << student2 << std::endl;
            student2.decreaseGrade();
            student2.decreaseGrade();
            student2.decreaseGrade();
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << std::endl;
        }
        
    }
    
    return (0);
}