// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   easyfind.hpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vklaouse <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2016/09/15 14:36:05 by vklaouse          #+#    #+#             //
//   Updated: 2016/09/15 15:14:05 by vklaouse         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <algorithm>
#include <iostream>
#include <list>

template<typename T>
int easyfind(T lst, int comp)
{
	typename T::iterator it;

	it = find(lst.begin(), lst.end(), comp);
	try
	{
		if(it != lst.end())
		{
			std::cout << "An occurence with " << *it << " has been detected." << std::endl;
			return (*it);
		}
		throw std::exception();
	}
	catch (std::exception e)
	{
		std::cout << "Error, no occurence detected." << std::endl;
	}		
	return (0);
}

#endif
