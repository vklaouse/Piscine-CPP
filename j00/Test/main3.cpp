// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main3.cpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vklaouse <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2016/08/08 15:17:18 by vklaouse          #+#    #+#             //
//   Updated: 2016/08/09 15:08:23 by vklaouse         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>
#include "Main3.class.hpp"

int main(void)
{
	Main3 instance;
	instance.test = 42;
	std::cout << "instance.test = "<< instance.test	<< std::endl;
	//instance.yolo();
	return (0);
}
