// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vklaouse <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2016/09/08 18:06:36 by vklaouse          #+#    #+#             //
//   Updated: 2016/09/10 19:09:53 by vklaouse         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat j = Bureaucrat("Bob", 30);
	Bureaucrat k = Bureaucrat("Giselle", 150);
	Bureaucrat l = Bureaucrat("Conrad", 2);
	std::cout << j << k << l;
	j.increasesGrade();
	k.increasesGrade();
	std::cout << j << k << l;
    k.decreasesGrade();
	k.decreasesGrade();
	std::cout << j << k << l;
	return (0);
}
