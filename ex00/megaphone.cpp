/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-lda- <ana-lda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 11:55:52 by ana-lda-          #+#    #+#             */
/*   Updated: 2025/06/25 12:25:46 by ana-lda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

/* int main(int ac, char **av)
{
	if (ac >= 2)
	{
		int i = 1;
		while (av[i])
		{
			int j = 0;
			while (av[i][j])
			{
				std::cout << (char)toupper(av[i][j]);
				j++;
			}
			i++;
		}
		std::cout << std::endl;
	}
	else
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	}

	return 0;
} */

int	main(int argc, char **argv)
{
	if (argc >= 2)
	{
		for (int i = 1; argv[i]; i++)
		{
			for (int j = 0; argv[i][j]; j++)
				std::cout << (char)toupper(argv[i][j]);
		}
		std::cout << std::endl;
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	return (0);
}