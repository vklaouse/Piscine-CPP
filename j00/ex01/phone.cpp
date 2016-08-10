// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   phone.cpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vklaouse <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2016/08/08 17:22:28 by vklaouse          #+#    #+#             //
//   Updated: 2016/08/10 21:04:04 by vklaouse         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Phone.class.hpp"
#include <iostream>
#include <string>
#include <iomanip>
#include <stdlib.h>

void	information(Phone *contacts, std::string str, int nbr)
{
	std::string buff;
	std::cout << str;
	getline(std::cin, buff);
	if (nbr == 0)
		contacts->first_name = buff;
	else if (nbr == 1)
		contacts->last_name = buff;
	else if(nbr == 2)
		contacts->nickname = buff;
	else if(nbr == 3)
		contacts->login = buff;
	else if(nbr == 4)
		contacts->postal_address = buff;
	else if(nbr == 5)
		contacts->email_address = buff;
	else if(nbr == 6)
		contacts->phone_number = buff;
	else if(nbr == 7)
		contacts->birthday_date = buff;
	else if(nbr == 8)
		contacts->favorite_meal = buff;
	else if(nbr == 9)
		contacts->underwear_color = buff;
	else if(nbr == 10)
		contacts->darkest_secret = buff;
}

void	add_information(Phone *contacts)
{
	information(contacts, "First name: ", 0);
	information(contacts, "Last name: ", 1);
	information(contacts, "Nickname: ", 2);
	information(contacts, "Login: ", 3);
	information(contacts, "Postal address: ", 4);
	information(contacts, "Email address: ", 5);
	information(contacts, "Phone number: ", 6);
	information(contacts, "Birthday date: ", 7);
	information(contacts, "Favorite meal: ", 8);
	information(contacts, "Underwear color: ", 9);
	information(contacts, "Darkest secret: ", 10);
}

void	index_list(int nbr, Phone *contacts)
{
	int i = 0;
	int t;

	std::cout << "Index     |First name|Last name |Nickname  "<< std::endl;
	while (i < nbr)
	{
		std::cout << i;
		std::cout << std::setw(10);
		std::cout << "|";
		t = contacts[i].first_name.size();
		if (t < 10)
		{
			std::cout << contacts[i].first_name;
			t = 10 - t + 1;
			std::cout << std::setw(t);
			std::cout << "|";
		}
		else
		{
			std::cout << contacts[i].first_name.substr(0, 9);
			std::cout << ".|";
		}
		t = contacts[i].last_name.size();
        if (t < 10)
        {
			std::cout << contacts[i].last_name;
            t = 10 - t + 1;
			std::cout << std::setw(t);
			std::cout << "|";
        }
        else
		{
			std::cout << contacts[i].last_name.substr(0, 9);
			std::cout << ".|";
		}
		t = contacts[i].nickname.size();
        if (t < 10)
        {
			std::cout << contacts[i].nickname;
            t = 10 - t;
			std::cout << std::setw(t);
			std::cout << " " << std::endl;
        }
        else
		{
			std::cout << contacts[i].nickname.substr(0, 9);
			std::cout << "." << std::endl;
		}
		i++;
	}
}

void	write_information(Phone contacts, std::string str, int nbr)
{
	std::cout << str;
    if (nbr == 0)
		std::cout << contacts.first_name << std::endl;
    else if (nbr == 1)
		std::cout << contacts.last_name << std::endl;
    else if(nbr == 2)
		std::cout << contacts.nickname << std::endl;
    else if(nbr == 3)
		std::cout << contacts.login << std::endl;
    else if(nbr == 4)
		std::cout << contacts.postal_address << std::endl;
    else if(nbr == 5)
		std::cout << contacts.email_address << std::endl;
    else if(nbr == 6)
		std::cout << contacts.phone_number << std::endl;
    else if(nbr == 7)
		std::cout << contacts.birthday_date << std::endl;
    else if(nbr == 8)
		std::cout << contacts.favorite_meal << std::endl;
    else if(nbr == 9)
		std::cout << contacts.underwear_color << std::endl;
    else if(nbr == 10)
		std::cout << contacts.darkest_secret << std::endl;
}

void	index_sp(int nbr, Phone *contacts)
{
	int i;

	std::string buff;
	std::cout << "Select a contact: ";
    getline(std::cin, buff);
	i = atoi(buff.c_str());
	if (i <= nbr)
	{
		write_information(contacts[i], "First name: ", 0);
		write_information(contacts[i], "Last name: ", 1);
		write_information(contacts[i], "Nickname: ", 2);
		write_information(contacts[i], "Login: ", 3);
		write_information(contacts[i], "Postal address: ", 4);
		write_information(contacts[i], "Email address: ", 5);
		write_information(contacts[i], "Phone number: ", 6);
		write_information(contacts[i], "Birthday date: ", 7);
		write_information(contacts[i], "Favorite meal: ", 8);
		write_information(contacts[i], "Underwear color: ", 9);
		write_information(contacts[i], "Darkest secret: ", 10);
	}
	else
		std::cout << "Contact not found" << std::endl;
}

int		main(void)
{
	Phone	contacts[8];
	int		i = 0;

	std::string buff;
	std::cout << "Enter a command: ";
	while (getline(std::cin, buff))
	{
		if (buff == "ADD")
		{
			if (i < 8)
			{
				add_information(&contacts[i]);
				i++;
			}
			else
				std::cout << "Your phonebook is full." << std::endl;
		}
		else if (buff == "SEARCH")
		{
			if (i > 0)
			{
				index_list(i, contacts);
				index_sp(i, contacts);
			}
			else
				std::cout << "Your phonebook is empty." << std::endl;
		}	
		else if (buff == "EXIT")
		{
			std::cout << "Contact delete." << std::endl;
			break;
		}
		else
			std::cout << "Please enter [ADD || SEARCH || EXIT]." << std::endl;
		std::cout << "Enter a command: ";
	}
	return (0);
} 
