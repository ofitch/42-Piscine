/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_alpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofitch <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 05:06:08 by ofitch            #+#    #+#             */
/*   Updated: 2016/11/11 05:29:55 by ofitch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(void)
{
	//Two variables 1 for upper case Alphabet and other for lowercase alphabet
	int up;
	int low;
	//Set low to lowercase and up to uppercase
	low = 'a';
	up = 'A';
	//Create a loop that will go from A-Z && a-z
	while (up <= 'Z' && low <= 'z')
	{
		//If the module of Uppercase is equal to 0 is odd.
		if (up % 2 == 0)
		{
			//Print UPPER case char.
			write(1, &up, 1);
		}
		//Else if is not 0 it is an ODD and will print the lowercase letter.
		else
		{
			write(1, &low, 1);
		}
		//Increase lowercase and Uppercase.
		up++;
		low++;
	}
	//Add a newline at the end.
	write(1, "\n", 1);
}
