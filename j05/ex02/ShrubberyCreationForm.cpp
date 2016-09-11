// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vklaouse <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2016/09/10 22:27:41 by vklaouse          #+#    #+#             //
//   Updated: 2016/09/11 17:37:37 by vklaouse         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm()
{
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string Target) : Form("ShrubberyCreationForm", 145, 137), _Target(Target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src) : Form(src)
{
	*this = src;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &src)
{
	Form::operator=(src);
	this->_Target = src._Target;
	return (*this);
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	if (this->getSigned() == true)
	{
		try
		{
			if (executor.getGrade() > this->getGradesign())
				throw Form::GradeTooHighException();
		}
		catch (std::exception e)
		{
			std::cout << "Error !" << std::endl;
		}
		if (executor.executeForm(*this))
		{
			std::string File = _Target + "_shrubbery";
			std::ofstream ofs(File);
			ofs << "ASCII trees" << std::endl;
			ofs.close();
		}
	}
}
