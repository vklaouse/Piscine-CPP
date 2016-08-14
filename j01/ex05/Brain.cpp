// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Brain.cpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vklaouse <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2016/08/11 18:10:30 by vklaouse          #+#    #+#             //
//   Updated: 2016/08/14 03:19:49 by vklaouse         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Brain.hpp"

Brain::Brain(void)
{
	return ;
}

Brain::~Brain(void)
{
	return ;
}

std::string Brain::identify()
{
	static int i;
	std::stringstream ss;
	ss << std::hex << this;
	if (i == 0)
		this->test = ss.str();
	i++;
	return (test);
}
