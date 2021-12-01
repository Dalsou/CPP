/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afoulqui <afoulqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 17:31:55 by afoulqui          #+#    #+#             */
/*   Updated: 2021/12/01 13:55:14 by afoulqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <string>
# include <fstream>

std::string	replace(std::string content, const std::string &s1, const std::string &s2)
{
	const size_t	size = s1.size();
	size_t			pos = 0;

	while ((pos = content.find(s1)) != std::string::npos)
	{
		content.erase(pos, size);
		content.insert(pos, s2);
	}
	return (content);
}

int	check_args(std::string filename, std::string s1, std::string s2)
{
    std::ifstream       file_in(filename.c_str());
    std::string         content("");

	if (!s1.size() || !s2.size())
	{
		std::cout << "One argument is empty.\n";
		return (1);
	}
	if (!file_in.is_open())
	{
		std::cout << "File in doesn't exist\n";
		return (1);
	}
	std::ofstream 		file_out((filename + ".replace").c_str());
	if (!file_out.is_open())
	{
		std::cout << "File out doesn't exist\n";
		file_in.close();
		return (1);
	}
	if (s1 != s2)
	{
		while (std::getline(file_in, content))
			file_out << replace(content, s1, s2) << std::endl;
	}
	file_in.close();
	file_out.close();
	return (0);
}

int	main(int ac, char **av)
{
	int ret;

	if (ac != 4)
	{
		std::cout << "Wrong number of arguments.\n";
		return (1);
	}
	ret = check_args(av[1], av[2], av[3]);
	if (ret)
		return (1);
	return (0);
}