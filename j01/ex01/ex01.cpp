// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ex01.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vklaouse <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2016/08/11 16:47:19 by vklaouse          #+#    #+#             //
//   Updated: 2016/08/11 16:53:28 by vklaouse         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <string>
#include <iostream>

void memoryLeak()
{
	std::string* panthere = new std::string("String panthere");
	std::cout << *panthere << std::endl;
	delete panthere;
}

int main()
{
	memoryLeak();
	return (0);
}
