/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofitch <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 21:48:37 by ofitch            #+#    #+#             */
/*   Updated: 2016/11/17 20:23:09 by ofitch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char **argv)
{
	//Create two variables one that initialize and the other that holds result
	int i;
	int result;

	i = 0;
	//If argc is not 2 then print new line
	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	else
	{
		//While string has not ended keep looping
		while (argv[1][i])
		{
			//If current char in string is an UPPER alphabetical char then run this statement.
			if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
			{
				//Substract current char minus N in ASCII value and the result substract it by M in ASCII table
				result = 'A'- (argv[1][i] - 'Z');
				//Write the result of char
				write(1, &result, 1);
			}
			//Else if is lower case the same is done but lowe case letters
			else if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
			{
				result = 'a' - (argv[1][i] - 'z');
				write(1, &result, 1);
			}
			else
			{
				//Else just print any char that is not an alphabetical char.
				write(1, &argv[1][i], 1);
			}

			i++;
		}
		write(1, "\n", 1);
	}
}
