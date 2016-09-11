// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Form.hpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vklaouse <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2016/09/10 19:18:21 by vklaouse          #+#    #+#             //
//   Updated: 2016/09/11 16:21:33 by vklaouse         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef FORM_HPP
# define FORM_HPP

#include <string>
#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {

private:

	std::string _Name;
	bool _Signed;
	int _Gradesign;
	int _Exc;

public:

	Form();
	Form(std::string name, int grade, int exc);
	Form(Form const &src);
	~Form();

	Form &operator=(Form const &src);

	std::string getName() const;
	bool getSigned() const;
	int getGradesign() const;
	int getExc() const;
	void beSigned(Bureaucrat &b);
	virtual void execute(Bureaucrat const & executor) const = 0;

	class GradeTooHighException : public std::exception {

	public:

		GradeTooHighException();
		GradeTooHighException(GradeTooHighException const &src);
		virtual ~GradeTooHighException() throw();

		GradeTooHighException &operator=(GradeTooHighException const &src);

		virtual const char *what() const throw();

	};

	class GradeTooLowException : public std::exception {

	public:

		GradeTooLowException();
		GradeTooLowException(GradeTooLowException const &src);
		virtual ~GradeTooLowException() throw();

		GradeTooLowException &operator=(GradeTooLowException const &src);

		virtual const char *what() const throw();

	};
};

std::ostream &operator<<(std::ostream &o, Form const & src);

#endif
