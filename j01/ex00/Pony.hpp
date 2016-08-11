// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Pony.hpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vklaouse <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2016/08/10 21:23:31 by vklaouse          #+#    #+#             //
//   Updated: 2016/08/11 16:33:27 by vklaouse         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef PONY_HPP
# define PONY_HPP

#include <string>

class Pony{

private:

	std::string _Name;
	std::string _Speed;
	std::string _Food;
	std::string _Size;

public:

	Pony(std::string Name, std::string Speed, std::string Food, std::string Size);
	~Pony(void);

	void jump(int height);
};

#endif
