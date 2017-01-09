/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_alpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofitch <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 13:40:49 by ofitch            #+#    #+#             */
/*   Updated: 2016/11/14 13:50:26 by ofitch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(void)
{
	//two variables one that holds Lowercase a and one with Uppercase A which is our start point
	int up;
	int low;

	up = 'A';
	low = 'a';
	//While loop that go through all the alphabet and stops in z or Z
	while (low <= 'z' && up <= 'Z')
	{
		// If alphabet module of 2 is 0 is even number and we write that.
		if (up % 2 == 0)
		{
			write(1, &up, 1);
		}
		//Else we print low cases.
		else
		{
			write(1, &low, 1);
		}
		//increase low and up
		low++;
		up++;
	}
	//New line at the end.
	write(1, "\n", 1);
}
