// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vklaouse <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2016/09/15 15:16:30 by vklaouse          #+#    #+#             //
//   Updated: 2016/09/15 17:18:13 by vklaouse         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "span.hpp"

int main()
{
	Span sp = Span(5);
	Span sp1 = Span(10000);
	Span sp2 = Span(10000);
	Span sp3 = Span(10);
	Span sp4 = Span(1);

	srand(time(NULL));
	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	sp1.RandInterval(9000);
	std::cout << sp1.shortestSpan() << std::endl;
	std::cout << sp1.longestSpan() << std::endl;

	sp2.Interval(42, 9000);
	std::cout << sp2.shortestSpan() << std::endl;
	std::cout << sp2.longestSpan() << std::endl;

	sp3.RandInterval(9000);
	std::cout << sp3.shortestSpan() << std::endl;
	std::cout << sp3.longestSpan() << std::endl;

	sp4.addNumber(5);
	sp4.addNumber(6);
	std::cout << sp4.shortestSpan() << std::endl;
	std::cout << sp4.longestSpan() << std::endl;
	return (0);
}
