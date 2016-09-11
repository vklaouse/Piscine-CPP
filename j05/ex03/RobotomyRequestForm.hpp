// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   RobotomyRequestForm.hpp                            :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vklaouse <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2016/09/10 22:28:00 by vklaouse          #+#    #+#             //
//   Updated: 2016/09/10 22:43:48 by vklaouse         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef ROBOTMYREQUESTFORM_HPP
# define ROBOTMYREQUESTFORM_HPP

#include <string>
#include <iostream>
#include "Form.hpp"

class RobotomyRequestForm : public Form {

private:

	std::string _Target;

public:

    RobotomyRequestForm();
	RobotomyRequestForm(std::string _Target);
    RobotomyRequestForm(RobotomyRequestForm const &src);
    ~RobotomyRequestForm();

    RobotomyRequestForm &operator=(RobotomyRequestForm const &src);

    void execute(Bureaucrat const &executor) const;

};

#endif
