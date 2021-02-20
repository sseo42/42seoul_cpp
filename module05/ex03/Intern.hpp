#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include <string>

class Form;

typedef struct s_str2func
{
    std::string     _strKey;
    Form            *(*_func)(std::string const &type);
} t_str2func;


class       Intern
{
    private:
        static int const    form_size = 3;
        t_str2func          matchingArr[form_size];

    public:
        Intern();
        ~Intern();
        Intern(Intern const &copy);
        Intern const &operator = (Intern const &obj);

        Form    *makeForm(std::string const &name, std::string const &target);
        t_str2func const &getMatching(int idx) const;
};

#endif