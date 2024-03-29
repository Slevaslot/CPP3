# ifndef AFORM_HPP
#define AFORM_HPP


#include <iostream>
#include <string>
#include <new>
#include "Bureaucrat.hpp"
class Bureaucrat;

class AForm {
	private:
	const std::string _name;
	bool	_sign;
	const int _req;
	const int _exec;
	public:

	AForm();
	AForm(const std::string name, const int _req, const int _exec);
	AForm &operator=(AForm &t);
	~AForm();

	        class GradeTooLowException: public std::exception {
            public :
                virtual const char *what() const throw();
        };
        class GradeTooHighException: public std::exception {
            public :
                virtual const char *what() const throw();
        };
	int	grade();
	const std::string getName() const;
	int getSign();
	void beSigned(Bureaucrat &b);
	int getExec();
	virtual void	function() const = 0;
	int getReq();
	void execute(Bureaucrat const & executor) const;
};

std::ostream& operator<<(std::ostream &os, AForm &t);

#endif

