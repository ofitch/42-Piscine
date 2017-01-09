/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_z.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofitch <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 14:06:14 by ofitch            #+#    #+#             */
/*   Updated: 2016/11/11 14:25:18 by ofitch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char **argv)
{
	// Create two variables one that holds the value that you want to display and the other the initalizer from while loop.
	int i;
	char z;
	
	z = 'z';
	i = 0;
	// if argcounter is just 1 (./a.out) print 'z' and add new line
	if (argc == 1)
	{
		write(1, &z, 1);
		write(1, "\n", 1);
		return (0);
	}
	// If argc is greater than one run if statement
	if (argc > 1)
	{
		//While my string has not ended keep looping
		while (argv[1][i] != '\0')
		{
			//If char 'z' in string is found then return 'z' create a new line and stop the if statement and exit while loop.
			if (argv[1][i] == 'z')
			{
				write(1, &z, 1);
				write(1, "\n", 1);
				return (0);
			}
			//Increase index by one
			i++;
		}
	}
return (0);
}
