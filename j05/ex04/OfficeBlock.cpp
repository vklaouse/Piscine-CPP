// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   OfficeBlock.cpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vklaouse <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2016/09/11 18:59:50 by vklaouse          #+#    #+#             //
//   Updated: 2016/09/12 16:33:55 by vklaouse         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "OfficeBlock.hpp"
#include <iostream>

OfficeBlock::OfficeBlock() : _S(NULL), _I(NULL), _E(NULL)
{
}

OfficeBlock::OfficeBlock(Bureaucrat *S, Intern *I, Bureaucrat *E) : _S(S), _I(I), _E(E)
{
}

OfficeBlock::OfficeBlock(OfficeBlock const &src)
{
	*this = src;
}

OfficeBlock::~OfficeBlock()
{
}

OfficeBlock &OfficeBlock::operator=(OfficeBlock const &src)
{
	this->_S =  src._S;
	this->_I =  src._I;
	this->_E =  src._E;
	return (*this);
}

void OfficeBlock::setIntern(Intern &I)
{
	this->_I = &I;
}

void OfficeBlock::setSigner(Bureaucrat &S)
{
	this->_S = &S;
}

void OfficeBlock::setExecutor(Bureaucrat &E)
{
	this->_E = &E;
}

void OfficeBlock::doBureaucracy(std::string form_name, std::string target)
{
	Form *f;

	if (_S == NULL || _I == NULL || _E == NULL)
	{
		std::cout << "Error, OfficeBlock not complete !" << std::endl;
		return ;
	}
	f = this->_I->makeForm(form_name, target);
	if (f == NULL)
		return ;
	f->beSigned(*this->_S);
	f->execute(*this->_E);	
}
