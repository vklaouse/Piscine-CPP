// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vklaouse <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2016/08/08 14:41:13 by vklaouse          #+#    #+#             //
//   Updated: 2016/08/08 14:52:40 by vklaouse         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <stdio.h>

int coucou = 1;
int f(void) {return 42;}

namespace test {
	int coucou = 2;
	int f(void) {return 43;}
}

namespace test2 = test;

int main(void)
{
	printf("coucou: %d\nf(): %d\ntest::coucou: %d\ntest::f(): %d\ntest2::coucou: %d\ntest2::f(): %d\n", coucou, f(), test::coucou, test::f(), test2::coucou, test2::f());
	return (0);

}
