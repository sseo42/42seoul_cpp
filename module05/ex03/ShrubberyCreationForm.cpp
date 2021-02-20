#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &type) : Form("ShrubberyCreationForm", 145, 137, type) {}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &copy) : Form(copy) {}

ShrubberyCreationForm const &ShrubberyCreationForm::operator = (ShrubberyCreationForm const &obj)
{
    if (this == &obj)
        return (*this);
    setTarget(obj.getTarget());
    setSign(obj.getSign());
    return (*this);
}

void                ShrubberyCreationForm::action(Bureaucrat const &executor) const
{
    std::ofstream    ofs;

    if (executor.getGrade() > getGrade4exec())
        throw Form::GradeTooLowException("Not sufficient grade to exec");
    ofs.open((getTarget() + "_shrubbery").c_str(), std::ios::trunc);
    if (!ofs.is_open())
        std::cerr << "Can't create a file" << std::endl;
    else
    {
        ofs << "             **              " << std::endl;
        ofs << "            <  >             " << std::endl;
        ofs << "             **              " << std::endl;
        ofs << "             **              " << std::endl;
        ofs << "            *  *             " << std::endl;
        ofs << "           *++++*            " << std::endl;
        ofs << "          *  ()  *           " << std::endl;
        ofs << "          *      *           " << std::endl;
        ofs << "         *~`~`~`~`*          " << std::endl;
        ofs << "        *  ()  ()  *         " << std::endl;
        ofs << "        *          *         " << std::endl;
        ofs << "       **&*&*&*&*&*&*        " << std::endl;
        ofs << "      *  ()  ()  ()  *       " << std::endl;
        ofs << "      *              *       " << std::endl;
        ofs << "     *++++++++++++++++*      " << std::endl;
        ofs << "    *  ()  ()  ()  ()  *     " << std::endl;
        ofs << "    *                  *     " << std::endl;
        ofs << "   *~`~`~`~`~`~`~`~`~`~`*    " << std::endl;
        ofs << "  *  ()  ()  ()  ()  ()  *   " << std::endl;
        ofs << "  **&*&*&*&*&*&*&*&*&*&*&*   " << std::endl;
        ofs << " *                        *  " << std::endl;
        ofs << "*,.,.,.,.,.,.,.,.,.,.,.,.,.* " << std::endl;
        ofs << "           |   |             " << std::endl;
        ofs << "          |`````|            " << std::endl;
        ofs << "          *_____*            " << std::endl;

        if (ofs.bad())
            std::cerr << "writing failed" << std::endl;
        else
            std::cout << "created a tree!" << std::endl;
        ofs.close();
    }
}