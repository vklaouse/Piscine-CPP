// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vklaouse <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2016/09/13 20:09:34 by vklaouse          #+#    #+#             //
//   Updated: 2016/09/13 21:18:27 by vklaouse         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>
#include <string>

class Base {public : virtual ~Base() {};};
class A : public Base {};
class B : public Base {};
class C : public Base {};

Base *generate(void)
{
	int i = rand() % 3;
	std::string Array[] = {"A", "B", "C"};
	
	std::cout << Array[i] << " Class create !" << std::endl;	
	if (i == 0)
		return (new A());	
	else if (i == 1)
		return (new B());
	else
		return (new C());
}

void identify_from_pointer(Base *p)
{
	A *a = dynamic_cast<A*>(p);
	if (a == NULL)
	{
		B *b = dynamic_cast<B*>(p);
		if (b == NULL)
			std::cout << "Identify_from_pointer: C" << std::endl;
		else
			std::cout << "Identify_from_pointer: B" << std::endl;
	}
	else
		std::cout << "Identify_from_pointer: A" << std::endl;
}


void identify_from_reference(Base &p)
{
	try
	{
		A &a = dynamic_cast<a&>(p);
		std::cout << 'A' << std::endl;
		static_cast<void>(a);
	}
	catch( std::exception &bc )
	{
		try
		{
			B &b = dynamic_cast<b&>(p);
			std::cout << 'B' << std::endl;
			static_cast<void>(b);
		}
		catch( std::exception &bc )
		{
			std::cout << 'C' << std::endl;
		}
	}
}

int main(void)
{
	Base *base = NULL;	

	srand(time(NULL));
	base = generate();
	identify_from_pointer(base);
	Base &base2 = *base;
	identify_from_reference(base2);
	return (0);
}
