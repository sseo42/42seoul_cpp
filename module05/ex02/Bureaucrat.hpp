#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#ifndef GRADE_SYSTEM
# define TOP_GRADE 1
# define BOTTOM_GRADE 150
#endif

# include <iostream>
# include <string>

class Form;

class   Bureaucrat
{
    private:
		Bureaucrat();
        std::string const   _name;
        int                 _grade;


    public:
        Bureaucrat(std::string const &name, int grade);
        ~Bureaucrat();
        Bureaucrat(Bureaucrat const &copy);
        Bureaucrat const &operator = (Bureaucrat const &obj);
        std::string         getName(void) const;
        int                 getGrade(void) const;
        void                increaseGrade(void);
        void                decreaseGrade(void);
        void                signForm(Form &task);
        void                executeForm(Form const &form);

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

std::ostream &operator << (std::ostream &os, Bureaucrat const &obj);

#endif
