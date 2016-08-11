// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ex04.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vklaouse <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2016/08/11 17:59:08 by vklaouse          #+#    #+#             //
//   Updated: 2016/08/11 18:07:32 by vklaouse         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <string>
#include <iostream>

int main(void)
{
	std::string brain = "HI THIS IS BRAIN";
	std::string* brainptr = &brain;
	std::string& brainref= brain;
	std::cout << "String = " << brain << std::endl;
	std::cout << "Pointer = " << *brainptr << std::endl;
	std::cout << "Reference = " << brainref << std::endl;
	
}
