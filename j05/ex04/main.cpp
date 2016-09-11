// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vklaouse <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2016/09/08 18:06:36 by vklaouse          #+#    #+#             //
//   Updated: 2016/09/11 19:06:01 by vklaouse         ###   ########.fr       //
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
	
	ob.setIntern(idiotOne);
	ob.setSigner(bob);
	ob.setExecutor(hermes);
	try
	{
		ob.doBureaucracy("mutant pig termination", "Pigley");
	}
	catch (Some::SpecificException & e)
	{
		/* specific known error happens, say something */
	}
	catch (std::exception & e) 
	{
	} 
}
