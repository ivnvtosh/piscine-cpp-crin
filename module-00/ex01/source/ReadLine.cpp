/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ReadLine.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccamie <ccamie@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 17:21:28 by ccamie            #+#    #+#             */
/*   Updated: 2022/10/25 14:58:51 by ccamie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

std::string readLine() {
	std::string	string;

	std::cout << "\n\033[1F"
				 "\x1b[47m\x1b[30m\x1b[1m"
				 " 🗿 \0337                                         "
				 "\0338"
				 "\0337";

	std::getline(std::cin, string);

	std::cout << "\0338" << string << "\n";
	std::cout << "\x1b[0m" << std::endl;

	if (std::cin.eof() == true) {
		throw "";
	}

	return string;
}

std::string readLine(std::string message) {
	std::string	string;

	std::cout << "\n\033[1F"
			  << "\x1b[43m\x1b[37m\x1b[1m"
			  << message
			  << "\x1b[0m"
			     " ";

	std::cout << "\x1b[47m\x1b[30m\x1b[1m"
				 " \0337                     \0338\0337";

	std::getline(std::cin, string);

	std::cout << "\0338" << string << "\n";
	std::cout << "\x1b[0m" << std::endl;

	if (std::cin.eof() == true) {
		throw "";
	}

	return string;
}
