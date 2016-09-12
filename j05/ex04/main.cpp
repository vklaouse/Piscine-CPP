// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vklaouse <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2016/09/08 18:06:36 by vklaouse          #+#    #+#             //
//   Updated: 2016/09/12 16:33:31 by vklaouse         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"
#include "OfficeBlock.hpp"

int main()
{	
	Intern      idiotOne;
	Bureaucrat  hermes = Bureaucrat("Hermes Conrad", 37);
	Bureaucrat  bob = Bureaucrat("Bobby Bobson", 123);
	OfficeBlock ob;
	Bureaucrat  Jack = Bureaucrat("Jack Ouille", 37);
    Bureaucrat  John = Bureaucrat("John Nyalidai", 123);
	OfficeBlock ab = OfficeBlock(&Jack, &idiotOne, &John);
	OfficeBlock ub;
	
	ob.setIntern(idiotOne);
	ob.setSigner(bob);
	ob.setExecutor(hermes);
	try
	{
		ob.doBureaucracy("shrubbery creation", "Pigley");
		ob.doBureaucracy("shrubbery", "Pigley");
		ab.doBureaucracy("presidential pardon", "Sarko");
		ub.doBureaucracy("robotomy request", "Franky");
	}
	catch (Form::GradeTooLowException e) 
	{
		std::cout << e.what() << std::endl;
	} 
}
