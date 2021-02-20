#ifndef FORM_HPP
# define FORM_HPP

#ifndef GRADE_SYSTEM
# define TOP_GRADE 1
# define BOTTOM_GRADE 150
#endif

# include <iostream>
# include <string>

class Bureaucrat;

class   Form
{
    private:
        std::string const   _name;
        int const           _grade4sign;
        int const           _grade4exec;
        bool                _sign;
        std::string         _target;

    public:
        Form(std::string const &name, int grade4sign, int grade4exec, std::string const &target);
        virtual ~Form() {};
        Form(Form const &copy);
        Form const &operator = (Form const &obj);
        std::string         getName(void) const;
        int                 getGrade4sign(void) const;
        int                 getGrade4exec(void) const;
        bool                getSign(void) const;
        std::string const & getTarget(void) const;
        void                setSign(bool tf);
        void                setTarget(std::string const &target);
        void                beSigned(Bureaucrat const &officer);
        void                execute(Bureaucrat const &executor) const;
        virtual void        action(Bureaucrat const &executor) const = 0;

        class   GradeTooHighException : public std::exception
        {
            private:
                std::string     _msg;

            public:
                GradeTooHighException() throw();
                GradeTooHighException(std::string const &msg) throw();
                virtual ~GradeTooHighException() throw();
                virtual const char *what() const throw();
        };

        class   GradeTooLowException : public std::exception
        {
            private:
                std::string     _msg;

            public:
                GradeTooLowException() throw();
                GradeTooLowException(std::string const &msg) throw();
                virtual ~GradeTooLowException() throw();
                virtual const char *what() const throw();
        };
};

std::ostream &operator << (std::ostream &os, Form const &obj);

#endif