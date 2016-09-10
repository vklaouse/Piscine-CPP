// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vklaouse <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2016/09/08 18:06:36 by vklaouse          #+#    #+#             //
//   Updated: 2016/09/10 22:07:51 by vklaouse         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	Bureaucrat j = Bureaucrat("Bob", 20);
	Bureaucrat k = Bureaucrat("Giselle", 40);
	Bureaucrat l = Bureaucrat("Conrad", 102);
	Form a = Form("TROLL", 20, 18);
	Form b = Form("MDR", 40, 50);

	std::cout << a << b;
	b.beSigned(l);
	std::cout << a << b;
	a.beSigned(j);
	std::cout << a << b;
	a.beSigned(j);
	std::cout << a << b;
	b.beSigned(k);
	std::cout << a << b;
	b.beSigned(k);
	std::cout << a << b;
	return (0);
}
