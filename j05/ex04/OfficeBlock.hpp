// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   OfficeBlock.hpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vklaouse <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2016/09/11 19:00:05 by vklaouse          #+#    #+#             //
//   Updated: 2016/09/12 15:15:06 by vklaouse         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef OFFICEBLOCK_HPP
# define OFFICEBLOCK_HPP

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "Intern.hpp"
#include <string>

class Form;
class Bureaucrat;
class Intern;

class OfficeBlock {

private:

	Bureaucrat *_S;
	Intern *_I;
	Bureaucrat *_E;

public:

	OfficeBlock();
	OfficeBlock(Bureaucrat *S, Intern *I, Bureaucrat *E);
	OfficeBlock(OfficeBlock const &src);
	~OfficeBlock();

	OfficeBlock &operator=(OfficeBlock const &src);

	void setIntern(Intern &I);
	void setSigner(Bureaucrat &S);
	void setExecutor(Bureaucrat &E);
	void doBureaucracy(std::string form_name, std::string target);

};

#endif
