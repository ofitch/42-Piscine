/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofitch <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 22:16:40 by ofitch            #+#    #+#             */
/*   Updated: 2016/11/15 01:27:47 by ofitch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char **argv)
{
	//Create an count var int.
	int i;

	//Set it equal to 0 to start counting from the first word, this counter will be used to count the string
	i = 0;
	//If arguement counter is not 4 then just stop and display a new line we don't need more parameters.
	if (argc != 4)
	{
		write(1, "\n", 1);
		return (1);
	}
	//While there is characters in first parameter keep going.
	while (argv[1][i])
	{
		//If string is not equal to the second parameter of the first char run this statement.
		if (argv[1][i] != argv[2][0])
		{
			//Write in parameter 1 the char
			write(1, &(argv[1][i]), 1);
		}
		//Else display the char in thrid parameter.
		else
		{
			write(1, &(argv[3][0]), 1);
		}
		//increase counter by one
		i++;
	}
	return (0);
}
