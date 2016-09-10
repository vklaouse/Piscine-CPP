// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vklaouse <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2016/09/10 22:27:36 by vklaouse          #+#    #+#             //
//   Updated: 2016/09/10 22:39:59 by vklaouse         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include <string>
#include <iostream>
#include "Form.hpp"

class ShrubberyCreationForm : public Form {
	
private:

	std::string _Target;

public:

	ShrubberyCreationForm();
	ShrubberyCreationForm(std::string _Target);
	ShrubberyCreationForm(ShrubberyCreationForm const &src);
	~ShrubberyCreationForm();

	ShrubberyCreationForm &operator=(ShrubberyCreationForm const &src);

	void execute(Bureaucrat const &executor) const;

};

#endif
