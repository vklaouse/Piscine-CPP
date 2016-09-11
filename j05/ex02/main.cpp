// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vklaouse <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2016/09/08 18:06:36 by vklaouse          #+#    #+#             //
//   Updated: 2016/09/11 17:56:03 by vklaouse         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main()
{
	Bureaucrat b1( "Franky", 40);
	Bureaucrat b2( "JohnJohn", 1);
	ShrubberyCreationForm S( "Arbre" );
	RobotomyRequestForm R( "RobotCop" );
	PresidentialPardonForm P( "Hollande" );
	srand(time(NULL));
	S.beSigned( b1 );
	S.beSigned( b2 );
	R.beSigned( b2 );
	P.beSigned( b2 );
	std::cout << S << R << P;

	S.execute( b1 );
	S.execute( b2 );
	R.execute( b1 );
	R.execute( b1 );
	R.execute( b1 );
	R.execute( b1 );
	P.execute( b2 );
	return (0);
}
