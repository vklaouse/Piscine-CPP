// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   RobotomyRequestForm.cpp                            :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vklaouse <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2016/09/10 22:27:51 by vklaouse          #+#    #+#             //
//   Updated: 2016/09/11 17:49:32 by vklaouse         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm()
{
}

RobotomyRequestForm::RobotomyRequestForm(std::string Target) : Form("RobotomyRequestForm", 72, 45), _Target(Target)
{
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src) : Form(src)
{
	*this = src;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &src)
{
	Form::operator=(src);
    this->_Target = src._Target;
    return (*this);
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
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
			std::cout << "* BRRRRR BRRRRR BRRRRR BRRRRR *" << std::endl;
			if (rand() % 2 == 0)
				std::cout << _Target << " has been robotomized successfully !" << std::endl;
			else
				std::cout <<  "Failure" << std::endl;
		}
    }
}
