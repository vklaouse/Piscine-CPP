// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Bureaucrat.cpp                                     :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vklaouse <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2016/09/08 18:06:28 by vklaouse          #+#    #+#             //
//   Updated: 2016/09/10 19:10:09 by vklaouse         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Bureaucrat.hpp"
#include <iostream>

Bureaucrat::Bureaucrat() : _Name(""), _Grade(0)
{
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _Name(name), _Grade(grade)
{
}

Bureaucrat::Bureaucrat(Bureaucrat const &src) 
{
	*this = src;
}

Bureaucrat::~Bureaucrat()
{
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &src)
{
	this->_Name = src._Name;
	this->_Grade = src._Grade;
	return (*this);
}

std::string Bureaucrat::getName() const
{
	return (this->_Name);
}

int Bureaucrat::getGrade() const
{
	return (this->_Grade);
}

Bureaucrat::GradeTooHighException::GradeTooHighException()
{
}

Bureaucrat::GradeTooHighException::GradeTooHighException(GradeTooHighException const &src)
{
	*this = src;
}

Bureaucrat::GradeTooHighException &Bureaucrat::GradeTooHighException::operator=(GradeTooHighException const &src)
{
	(void)src;
    return (*this);
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Too high grade !");
}

Bureaucrat::GradeTooHighException::~GradeTooHighException() throw()
{
}

Bureaucrat::GradeTooLowException::GradeTooLowException()
{
}

Bureaucrat::GradeTooLowException::GradeTooLowException(GradeTooLowException const &src)
{
	*this = src;
}

Bureaucrat::GradeTooLowException &Bureaucrat::GradeTooLowException::operator=(GradeTooLowException const &src)
{
	(void)src;
	return (*this);
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Too low grade !");
}

Bureaucrat::GradeTooLowException::~GradeTooLowException() throw()
{
}

void Bureaucrat::increasesGrade()
{
	try
	{
		if (getGrade() <= 1)
			throw Bureaucrat::GradeTooHighException();
		else
			--_Grade;
	}
	catch (Bureaucrat::GradeTooHighException &e)
    {
		std::cout << e.what() << std::endl;
    }
}

void Bureaucrat::decreasesGrade()
{
	try
	{
		if (getGrade() >= 150)
			throw Bureaucrat::GradeTooLowException();
		else
			++_Grade;
	}
	catch (Bureaucrat::GradeTooLowException &e)
    {
		std::cout << e.what() << std::endl;
    }
}

std::ostream &operator<<(std::ostream &o, Bureaucrat const & src)
{
	o << src.getName() << " is rank " << src.getGrade() << " !"<< std::endl;
	return (o);
}
