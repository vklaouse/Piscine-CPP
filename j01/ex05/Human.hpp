// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Human.hpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vklaouse <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2016/08/11 18:10:48 by vklaouse          #+#    #+#             //
//   Updated: 2016/08/14 02:28:39 by vklaouse         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef HUMAN_HPP
# define HUMAN_HPP

#include "Brain.hpp"
#include <string>

class Human{

public:

	Brain brain;

	Human(void);
	~Human(void);

	Brain getBrain(void);
	std::string identify(void);
};

#endif
