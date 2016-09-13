// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vklaouse <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2016/09/13 18:37:39 by vklaouse          #+#    #+#             //
//   Updated: 2016/09/13 19:53:25 by vklaouse         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Data.hpp"

void *serialize(void)
{
	char c;
	int *n = NULL;
	char random[] = "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i = 0;
	char *raw = new char[8 + sizeof(int) + 8];

	srand(time(NULL));
	while (i < 8)
	{
		c = random[std::rand() % sizeof(random)];
		raw[i] = c;
		std::cout << c;
		i++;
	}
	std::cout << std::endl;
	n = reinterpret_cast<int*>(raw + 8);
	n[0] = rand();
	std::cout << *n << std::endl;
	i = 0;
	while (i < 8)
	{
		c = random[std::rand() % sizeof(random)];
        raw[i + 12] = c;
		std::cout << c;
        i++;
	}
	std::cout << std::endl;
	return (static_cast<void*>(raw));
}

Data *deserialize(void *raw)
{
	Data *data = new Data();
	char *Raw;
	int *n;
	int i = 0;
	
	Raw = reinterpret_cast<char*>(raw);
	while (i < 8)
	{
		data->s1 += Raw[i];
		i++;
	}
	n = reinterpret_cast<int*>(Raw + 8);
	data->n = *n;
	i = 0;
	while (i < 8)
	{
		data->s2 += Raw[i + 12];
		i++;
	}
	std::cout << data->s1 << std::endl;
	std::cout << data->n << std::endl;
	std::cout << data->s2 << std::endl;
	return (data);
}

int main()
{
	void *raw;
	Data *data;

	raw = serialize();
	std::cout << std::endl;
	data = deserialize(raw);
	return (0);
}
