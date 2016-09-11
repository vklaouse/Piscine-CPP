// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   PresidentialPardonForm.cpp                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vklaouse <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2016/09/10 22:28:14 by vklaouse          #+#    #+#             //
//   Updated: 2016/09/11 17:54:15 by vklaouse         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
{
}

PresidentialPardonForm::PresidentialPardonForm(std::string Target) : Form("PresidentialPardonForm", 25, 5), _Target(Target)
{
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &src) : Form(src)
{
	*this = src;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &src)
{
	Form::operator=(src);
    this->_Target = src._Target;
    return (*this);
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
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
			std::cout << _Target << " has been pardoned by Zafod Beeblebrox." << std::endl;
		}
    }
}
