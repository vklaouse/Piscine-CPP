// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Brain.hpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vklaouse <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2016/08/11 18:10:36 by vklaouse          #+#    #+#             //
//   Updated: 2016/08/14 03:18:34 by vklaouse         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <string>
#include <iostream>
#include <sstream>

class Brain{

public:

	int weight;
	int size;
	int contents;
	std::string test;

	Brain(void);
	~Brain(void);

	std::string identify();
	
};

#endif
