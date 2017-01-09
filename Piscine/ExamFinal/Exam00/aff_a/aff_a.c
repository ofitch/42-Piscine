/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofitch <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 15:46:17 by ofitch            #+#    #+#             */
/*   Updated: 2016/11/14 16:02:00 by ofitch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char **argv)
{
	//Create two int variables they will be the counters one for parameter and the other for string array
	int i;
	int j;

	i = 0;
	//if argc is less than two or just displays one param then print char a and a new line
	if (argc < 2)
	{
		write(1, "a", 1);
		write(1, "\n", 1);
		return (0);
	}
	// If argc have more than two parameters then run if statement.
	if (argc >= 2)
	{
		// While parameters are not NULL or they haven't ended yet keep running while loop
		while (argv[i] != '\0')
		{
			//Create another while loop to iterate through the string array while is not null keep going
			while (argv[i][j] != '\0')
			{
				//if char a is found in string then return that 'a', create a newline and exit the if statement.
				if (argv[i][j] == 'a')
				{
					write(1, &argv[i][j], 1);
					write(1, "\n", 1);
					return (0);
				}
				//Increase string counter by one so it will continue until it reaches the end
				j++;
			}
			//Increase parameter counter by one until it reaches the end
			i++;
		}
	}
}
