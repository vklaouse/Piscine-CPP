// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vklaouse <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2016/09/15 14:36:26 by vklaouse          #+#    #+#             //
//   Updated: 2016/09/15 15:13:49 by vklaouse         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "easyfind.hpp"



int main()
{
	std::list<int> lst;
	int i;

	lst.push_back(1);
	lst.push_back(3);
	lst.push_back(-4);
	lst.push_back(55);
	lst.push_back(353);
	lst.push_back(6);
	lst.push_back(2);
	lst.push_back(-66);
	lst.push_back(666);
	lst.push_back(42);
	i = easyfind(lst, 42);
	i = easyfind(lst, 100);
	return (0);
}
