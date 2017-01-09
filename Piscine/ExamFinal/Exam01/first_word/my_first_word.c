/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_first_word.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofitch <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 20:04:19 by ofitch            #+#    #+#             */
/*   Updated: 2016/11/17 13:17:40 by ofitch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char **argv)
{
	//Create a counter to go through string.
	int i;

	i = 0;
	//If argc is not 1 then stop write a new line
	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	else
	{
		//Check for spaces or tabs and keep moving while it finds them.
		while (argv[1][i] == ' ' || argv[1][i] == '\t')
		{
			i++;
		}
		//If string has not finish keep running this while loop
		while (argv[1][i] != '\0')
		{
			//If tab or space is encounter then break.
			if (argv[1][i] == ' ' || argv[1][i] == '\t')
			{
				break;
			}
			//Print current char until it reaches tab or space.
			write(1, &argv[1][i], 1);
			//Keep going.
			i++;
		}
		write(1, "\n", 1);
	}
	return (0);
}
