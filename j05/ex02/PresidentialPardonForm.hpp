// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   PresidentialPardonForm.hpp                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vklaouse <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2016/09/10 22:28:21 by vklaouse          #+#    #+#             //
//   Updated: 2016/09/10 22:42:10 by vklaouse         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include <string>
#include <iostream>
#include "Form.hpp"

class PresidentialPardonForm : public Form {

private:

	std::string _Target;

public:

    PresidentialPardonForm();
    PresidentialPardonForm(std::string _Target);
    PresidentialPardonForm(PresidentialPardonForm const &src);
    ~PresidentialPardonForm();

    PresidentialPardonForm &operator=(PresidentialPardonForm const &src);

    void execute(Bureaucrat const &executor) const;

};

#endif
