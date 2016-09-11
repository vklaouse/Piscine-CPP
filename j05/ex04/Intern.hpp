// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Intern.hpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vklaouse <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2016/09/11 18:00:52 by vklaouse          #+#    #+#             //
//   Updated: 2016/09/11 18:43:56 by vklaouse         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef INTERN_HPP
# define INTERN_HPP

#include <iostream>
#include <string>
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

class ShrubberyCreationForm;
class PresidentialPardonForm;
class RobotomyRequestForm;
class Form;

class Intern {

public:

	Intern();
	Intern(Intern const &src);
	~Intern();

	Intern &operator=(Intern const &src);

	Form *makeForm(std::string name_of_form, std::string target_of_form);

};

#endif
