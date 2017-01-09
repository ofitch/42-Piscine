/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_last_param.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofitch <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 14:32:31 by ofitch            #+#    #+#             */
/*   Updated: 2016/11/14 15:45:23 by ofitch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char **argv)
{
	//Two variables one to get the number of last argc and other one to iterate through string array.
	int last;
	int i;
	
	//argc will count up until NULL. -1 will get last element with strings.
	last = argc - 1;
	//If argc is less than 2 or == to 1 just display a new line.
	if (argc < 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	//If argv last element is not NULL run if statement.
	if (argv[last])
	{
		//Set var to iterate through string array argv[param][string array]
		i = 0;
		//While my last parameter is not null keep running
		while (argv[last][i] != '\0')
		{
		//Use write and pass address of argv[param][strin array] and write char by char
			write(1, &argv[last][i], 1);
			//Increase counter by 1 each time
			i++;
		}
		//Once loop is finish display a new line
		write(1, "\n", 1);
	}
}
