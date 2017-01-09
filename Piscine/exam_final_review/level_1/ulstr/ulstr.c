/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofitch <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 01:28:26 by ofitch            #+#    #+#             */
/*   Updated: 2016/11/15 03:28:02 by ofitch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char **argv)
{
	//Create a variable to iterate through string
	int j;
	//Create if statements if it has more than 2 par or if is 0 then we write a new line
	if (argc <= 1 || argc > 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	//If arguement counter is equal to two then we run the if statement
	//[0] ./a.out [1] String [2] NULL
	if (argc == 2)
	{
		//Set counter equal to zero
		j = 0;
		//Create a while loop that only takes 1 parameter ( look up ^  if confuse) and iterate through the string 
			while (argv[1][j] != '\0')
			{
				// If char from 'a' lower case to 'z' lower case is found
				if (argv[1][j] >= 'a' && argv[1][j] <= 'z')
				{
				//Substract 32 from that char(32 is the difference between lower and upper case in ASCII table)
					argv[1][j] = argv[1][j] - 32;
				}
				//Else if it's UPPER case
				else if(argv[1][j] >= 'A' && argv[1][j] <= 'Z')
				{
					//We just add 32
					argv[1][j] = argv[1][j] + 32;
				}
				//Once it checks all the conditions we write the char. This will display only char and ignore commas and everything else.
				write(1, &argv[1][j], 1);
				//increase counter by one
				j++;
			}
		//display a new line once it finishes with the string.
		write(1, "\n", 1);
	}
	return (0);
}
