// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   span.hpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vklaouse <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2016/09/15 15:17:44 by vklaouse          #+#    #+#             //
//   Updated: 2016/09/15 17:11:41 by vklaouse         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef SPAN_HPP
# define SPAN_HPP

#include <vector>
#include <iostream>
#include <algorithm>

class Span {

private:

	unsigned int _n;
	std::vector<int> _vector;

public:

	Span();
	Span(unsigned int n);
	Span(Span const &src);
	~Span();

	Span &operator=(Span const &src);

	void addNumber(int i);
	int shortestSpan();
	int longestSpan();
	void Interval(int i, unsigned int n);
	void RandInterval(unsigned int n);

};

#endif
