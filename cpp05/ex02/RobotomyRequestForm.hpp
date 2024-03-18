#include "Bureaucrat.hpp"
#include <fstream>
#include <iostream>
#include <cstdlib>

class RobotomyRequestForm : public AForm
{
	private :
		std::string _target;
	public :
		RobotomyRequestForm();
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm &operator=(RobotomyRequestForm &t);
		~RobotomyRequestForm();
		void	function() const;
};
