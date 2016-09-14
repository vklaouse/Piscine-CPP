// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   iter.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vklaouse <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2016/09/14 17:09:06 by vklaouse          #+#    #+#             //
//   Updated: 2016/09/14 18:36:05 by vklaouse         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>

template<typename T>
void function(T value)
{
	std::cout << value << ' ';
}

template<typename T>
void iter(T *tab, int size, void (*function)(T))
{
	int i = 0;

	while (i < size)
	{
		function(tab[i]);
		i++;
	}
}

int main()
{
	int tab_int[] = {1, 2, 3, 4, 5, 6, 7};
	void (*function_int)(int);
	function_int = &function;
	std::cout << "Tab_int = ";
	iter(tab_int, 7, function_int);
	std::cout << std::endl;

	double tab_double[] ={1, 2.3, 3.4, 4.5, 5.6, 6, 7};
    void (*function_double)(double);
    function_double = &function;
	std::cout << "Tab_double = ";
    iter(tab_double, 7, function_double);
	std::cout << std::endl;

	char tab_char[] ={'1', '2', '3', '4', '5', '6', '7'};
    void (*function_char)(char);
    function_char = &function;
	std::cout << "Tab_char = ";
    iter(tab_char, 7, function_char);
	std::cout << std::endl;
	return (0);
}
