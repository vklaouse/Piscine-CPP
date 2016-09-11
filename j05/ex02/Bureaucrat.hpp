// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Bureaucrat.hpp                                     :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vklaouse <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2016/09/08 18:06:23 by vklaouse          #+#    #+#             //
//   Updated: 2016/09/11 17:09:27 by vklaouse         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include "Form.hpp"

class Form;

class Bureaucrat {

private:

	std::string _Name;
	int _Grade;

public:

	Bureaucrat();
	Bureaucrat(std::string name, int grade);
	Bureaucrat(Bureaucrat const &src);
	~Bureaucrat();

	Bureaucrat &operator=(Bureaucrat const &src);

	std::string getName() const;
	int getGrade() const;
	void increasesGrade();
	void decreasesGrade();
	void signForm(Form &f);
	int executeForm(Form const & form) const;

	class GradeTooHighException : public std::exception {

	public:
		
		GradeTooHighException();
		GradeTooHighException(GradeTooHighException const &src);
		~GradeTooHighException() throw();

		GradeTooHighException &operator=(GradeTooHighException const &src);

		virtual const char *what() const throw();

	};

	class GradeTooLowException : public std::exception {

	public:

		GradeTooLowException();
		GradeTooLowException(GradeTooLowException const &src);
		~GradeTooLowException() throw();

		GradeTooLowException &operator=(GradeTooLowException const &src);

		virtual const char *what() const throw();

	};

};

std::ostream &operator<<(std::ostream &o, Bureaucrat const & src);

#endif
