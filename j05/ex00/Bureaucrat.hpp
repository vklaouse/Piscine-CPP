// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Bureaucrat.hpp                                     :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vklaouse <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2016/09/08 18:06:23 by vklaouse          #+#    #+#             //
//   Updated: 2016/09/08 18:35:59 by vklaouse         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat {

private:

	std::string _Name;
	int _Grade;

public:

	Bureaucrat();
	Bureaucrat(Bureaucrat const &src);
	~Bureaucrat();

	Bureaucrat &operator=(Bureaucrat const &src);

	void getName();
	void getGrade();
	void increasesGrade();
	void decreasesGrade();

	class GradeTooHighException : public std::exception{

	};

	class GradeTooLowException : public std::exception {
	
	};

};

std::ostream &operator<<(std::ostream &o, Bureaucrat const & src);

#endif
