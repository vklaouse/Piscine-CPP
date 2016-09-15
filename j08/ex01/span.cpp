// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   span.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vklaouse <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2016/09/15 15:17:39 by vklaouse          #+#    #+#             //
//   Updated: 2016/09/15 17:28:07 by vklaouse         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "span.hpp"

Span::Span() : _n(0)
{
}

Span::Span(unsigned int n) : _n(n)
{
}

Span::Span(Span const &src)
{
	*this = src;
}

Span::~Span()
{
}

Span &Span::operator=(Span const &src)
{
	this->_n = src._n;
	this->_vector = src._vector;
	return (*this);
}

void Span::addNumber(int i)
{
	try
	{
		if (this->_vector.size() < this->_n)
		{
			this->_vector.push_back(i);
			return ;
		}
		throw std::exception();
	}
	catch (std::exception e)
	{
		std::cout << "Error, no more place for a new value." << std::endl;
	}
}

int Span::shortestSpan()
{
	try
	{
		if (this->_vector.size() <= 1)
			throw std::exception();
		std::sort(this->_vector.begin(), this->_vector.end());
        return (this->_vector[1] - this->_vector[0]);
	}
	catch (std::exception e)
	{
		std::cout << "Need more numbers for search an span." << std::endl;
	}
	return (0);
}

int Span::longestSpan()
{
	int size;

	try
    {
		size = this->_vector.size();
		if (size <= 1)
			throw std::exception();
		std::sort(this->_vector.begin(), this->_vector.end());
		return (this->_vector[size - 1] - this->_vector[0]);
    }
    catch (std::exception e)
    {
		std::cout << "Need more numbers for search an span." << std::endl;
    }
    return (0);
}

void Span::Interval(int i, unsigned int n)
{
	unsigned int cnt = 0;

	if (n <= 1)
		return ;
	try
	{
		if (n + this->_vector.size() <= _n)
		{
			while (cnt < n)
			{
				this->_vector.push_back(i + cnt);
				cnt++;
			}
		}
		else
			throw std::exception();
	}
	catch (std::exception e)
	{
		std::cout << "Error, no more place for a new value." << std::endl;
	}
}

void Span::RandInterval(unsigned int n)
{
	unsigned int cnt = 0;

    if (n <= 1)
		return ;
    try
    {
		if (n + this->_vector.size() <= _n)
		{
			while (cnt < n)
			{
				this->_vector.push_back(rand());
				cnt++;
            }
		}
        else
            throw std::exception();
    }
    catch (std::exception e)
    {
		std::cout << "Error, no more place for a new value." << std::endl;
    }
	return ;
}
