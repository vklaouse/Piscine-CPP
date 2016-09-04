// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vklaouse <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2016/09/04 18:30:55 by vklaouse          #+#    #+#             //
//   Updated: 2016/09/04 21:04:22 by vklaouse         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Victim.hpp"
#include "Sorcerer.hpp"
#include "Peon.hpp"
#include <iostream>

int main(void)
{
	Sorcerer Robert("Robert", "the Magnificient");
	Victim John("John");
	Peon JohnJohn("JohnJohn");

	std::cout << Robert << John << JohnJohn;
	
	Robert.polymorph(John);
	Robert.polymorph(JohnJohn);
	return (0);
}
