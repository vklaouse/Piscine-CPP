// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Intern.cpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vklaouse <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2016/09/11 18:00:56 by vklaouse          #+#    #+#             //
//   Updated: 2016/09/11 18:51:25 by vklaouse         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Intern.hpp"

Intern::Intern()
{
}

Intern::Intern(Intern const &src)
{
	*this = src;
}

Intern::~Intern()
{
}

Intern &Intern::operator=(Intern const &src)
{
	(void)src;
	return (*this);
}

Form *Intern::makeForm(std::string name_of_form, std::string target_of_form)
{
	Form *form = NULL;

	if (name_of_form == "presidential pardon")
	{
		PresidentialPardonForm *F = new PresidentialPardonForm(target_of_form);
		form = F;
		std::cout << "Intern create" << std::endl;
	}
	else if (name_of_form == "robotomy request")
	{
		RobotomyRequestForm *F = new RobotomyRequestForm(target_of_form);
		form = F;
		std::cout << "Intern create" << std::endl;
	}
	else if (name_of_form == "shrubbery creation")
	{
		ShrubberyCreationForm *F = new ShrubberyCreationForm(target_of_form);
		form = F;
		std::cout << "Intern create" << std::endl;
	}
	else
		std::cout << "Sorry, this Form is unknow." << std::endl;
	return (form);
}
