#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

class	Bureaucrat {
	
	private:
		const std::string	_name;
		int					_grade;
	
	public:
		// Constructors & Destructor
		Bureaucrat(void);
		~Bureaucrat(void);
		Bureaucrat(std::string name, int grade);
		Bureaucrat(const Bureaucrat& copy);
		// Operator
		Bureaucrat &operator=(const Bureaucrat& op);
		// Getter Functions
		const std::string&	getName(void) const;
		int	getGrade(void) const;
		// Exception
		class	GradeTooHighException : public std::exception
		{
			public:
				const char* what() const throw();
		};
		class	GradeTooLowException : public std::exception
		{
			public:
				const char* what() const throw();
		};
		// Functions
		void	incrementGrade(void);
		void	decrementGrade(void);
};

std::ostream&	operator<<(std::ostream& out, const Bureaucrat& i);

#endif