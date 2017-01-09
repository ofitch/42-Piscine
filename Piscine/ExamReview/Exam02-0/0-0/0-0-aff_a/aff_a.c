/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofitch <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 02:04:52 by ofitch            #+#    #+#             */
/*   Updated: 2016/11/11 14:05:02 by ofitch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

/*
int		main(argc, **argv)
{
	char *str;

	str = "Hallo World";
	if (*str != '\0')
	{
		if (*str == 'a')
		{
			ft_putchar(*str);
		}
	}
	ft_putchar('\n');
	return (0);
}
*/

int		main(int argc, char **argv)
{
	//Counter to while loop
	int i;

	//If my argc is just one  ./a.out then just print 'a'
	if (argc == 1)
	{
		ft_putchar('a');
	}
	//if my argc has more than two parameters > than 1 run the if statement
	if (argc > 1)
	{
		//Counter set to 1 or 2
		i = 0;
		//while my arg is not empty keep looping
		while (argv[1][i] != '\0')
		{
			//Loop through the string, if it is equal 'a' then print the letter and stop.
			if (argv[1][i] == 'a')
			{
				ft_putchar(argv[1][i]);
				//Create a new line if we find a char a we stop and print the char with the new line
				ft_putchar('\n');
				// End statement after 1st char
				return (0);
			}
			//Increase index
			i++;
		}
	}
	//Return a new line at the end;
	ft_putchar('\n');
	return (0);
}
