// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vklaouse <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2016/08/10 21:23:00 by vklaouse          #+#    #+#             //
//   Updated: 2016/08/11 16:41:24 by vklaouse         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Pony.hpp"
#include <iostream>
#include <string>

void ponyonthestack()
{
    Pony stack("OntheStack", " 10 km/h", "apples", "2 meters");
	
	stack.jump(10);
	return ;
}

void ponyontheheap()
{
    Pony* heap = new Pony ("OntheHeap", " 11 km/h", "carrots", "1,90 meters");
	
	heap->jump(4);
	delete heap;
	return ;
}

int main(void)
{
	ponyontheheap();
	ponyonthestack();
	return (0);
}
