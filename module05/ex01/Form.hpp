#ifndef FORM_HPP
# define FORM_HPP

#ifndef GRADE_SYSTEM
# define TOP_GRADE 1
# define BOTTOM_GRADE 150
#endif

# include <iostream>
# include <string>

class   Bureaucrat;

class   Form
{
    private:
        std::string const   _name;
        int const           _grade;
        bool                _sign;

    public:
        Form(std::string const &name, int grade);
        ~Form();
        Form(Form const &copy);
        Form const &operator = (Form const &obj);
        std::string         getName(void) const;
        int                 getGrade(void) const;
        bool                getSign(void) const;
        void                beSigned(Bureaucrat const &officer);

        class   GradeTooHighException : public std::exception
        {
            public:
                GradeTooHighException() throw();
                virtual ~GradeTooHighException() throw();
                virtual const char *what() const throw();
        };

        class   GradeTooLowException : public std::exception
        {
            public:
                GradeTooLowException() throw();
                virtual ~GradeTooLowException() throw();
                virtual const char *what() const throw();
        };
};

std::ostream &operator << (std::ostream &os, Form const &obj);

#endif
