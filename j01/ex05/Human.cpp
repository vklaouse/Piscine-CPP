// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Human.cpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vklaouse <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2016/08/11 18:11:31 by vklaouse          #+#    #+#             //
//   Updated: 2016/08/14 02:33:32 by vklaouse         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Human.hpp"

Human::Human(void)
{
	Brain *brain = new Brain();
	this->brain = *brain;
	return ;
}

Human::~Human(void)
{
	return ;
}

std::string Human::identify(void)
{
	return (brain.identify());
}

Brain Human::getBrain(void)
{
	return (this->brain);
}
