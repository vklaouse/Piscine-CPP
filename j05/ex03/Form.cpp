// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Form.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vklaouse <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2016/09/10 19:18:17 by vklaouse          #+#    #+#             //
//   Updated: 2016/09/11 18:57:03 by vklaouse         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Form.hpp"

Form::Form() : _Name(""), _Signed(false), _Gradesign(1), _Exc(1)
{
}

Form::Form(std::string name, int grade, int exc) : _Name(name), _Signed(false), _Gradesign(grade), _Exc(exc)
{
}

Form::Form(Form const &src)
{
	*this = src;
}

Form::~Form()
{
}

Form &Form::operator=(Form const &src)
{
	this->_Name = src._Name;
	this->_Signed = src._Signed;
	this->_Gradesign = src._Gradesign;
	this->_Exc = src._Exc;
	return (*this);
}

std::string Form::getName() const
{
	return (_Name);
}

bool Form::getSigned() const 
{
	return (_Signed);
}

int Form::getGradesign() const
{
	return (_Gradesign);
}

int Form::getExc() const
{
	return (_Exc);
}

void Form::beSigned(Bureaucrat &b)
{
	if (getSigned() == false) 
	{
		try
		{
			if (b.getGrade() > getGradesign())
				throw Form::GradeTooLowException();
			b.signForm(*this);
			_Signed = true;
		}
		catch (GradeTooLowException &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	else
	{
		b.signForm(*this);
		_Signed = true;
	}
}

Form::GradeTooHighException::GradeTooHighException()
{
}

Form::GradeTooHighException::GradeTooHighException(GradeTooHighException const &src)
{
	*this = src;
}

Form::GradeTooHighException &Form::GradeTooHighException::operator=(GradeTooHighException const &src)
{
	(void)src;
    return (*this);
}

const char *Form::GradeTooHighException::what() const throw()
{
	return ("Too high grade !");
}

Form::GradeTooHighException::~GradeTooHighException() throw()
{
}

Form::GradeTooLowException::GradeTooLowException()
{
}

Form::GradeTooLowException::GradeTooLowException(GradeTooLowException const &src)
{
	*this = src;
}

Form::GradeTooLowException &Form::GradeTooLowException::operator=(GradeTooLowException const &src)
{
	(void)src;
	return (*this);
}

const char *Form::GradeTooLowException::what() const throw()
{
	return ("Too low grade !");
}

Form::GradeTooLowException::~GradeTooLowException() throw()
{
}

std::ostream &operator<<(std::ostream &o, Form const & src)
{
	o << src.getName() << " Form";
	if (src.getSigned() == false)
		o << " not signed, ";
	else
		o << " signed, ";
	o << "need a rank of " << src.getGradesign() << " to be signed and " << src.getExc() << " to be executed !"  << std::endl;
	return (o);
}
