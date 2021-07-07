/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afoulqui <afoulqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 17:31:55 by afoulqui          #+#    #+#             */
/*   Updated: 2021/07/07 15:52:54 by afoulqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
# include <sys/stat.h>
# include <fstream>
# include <sstream>
# include <string>

void	replace(std::string av[3])
{
	std::stringstream  	buffer;
    std::ifstream       file(av[0].c_str());
	std::ofstream 		file_replace(av[0] + ".replace");
    std::string         content;
	size_t				pos = 0;

    buffer << file.rdbuf();
    content = buffer.str();
	while ((pos = content.find(av[1], pos)) != std::string::npos) {
		content.replace(pos, av[1].length(), av[2]);
		pos += av[2].length();
	}
	file.close();
	file_replace << content;
}

int	check_args(int argc, std::string *av)
{
	int	ret = 1;
	struct stat buffer;

	if (argc != 4)
		std::cout << "Wrong number of arguments.\n";
	else if (!av[0].length() || !av[1].length() || !av[2].length())
		std::cout << "One argument is empty.\n";
	else if (stat(av[2].c_str(), &buffer) == 0)
		std::cout << "File doesn't exist.\n";
	else
		ret = 0;	
	return (ret);
}

int	main(int argc, char **argv)
{
	std::string av[3];
	int ret;

	(void)argc;
	for (int i = 1; i < 4; i++)
		av[i - 1].append(argv[i]);
	ret = check_args(argc, av);
	if (!ret)
		replace(av);
	for (int i = 0; i < 3; i++)
		av[i].clear();
	return (ret);
}