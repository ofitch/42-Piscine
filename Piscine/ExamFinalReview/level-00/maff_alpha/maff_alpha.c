/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_alpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofitch <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/17 23:42:13 by ofitch            #+#    #+#             */
/*   Updated: 2016/11/17 23:53:39 by ofitch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(void)
{
	int low;
	int up;

	low = 'a';
	up = 'A';
	while (low <= 'z' && up <= 'Z')
	{
		if (up % 2 == 0)
		{
			write(1, &up, 1);
		}
		else if (low % 2 != 0)
		{
			write(1, &low, 1);
		}
		low++;
		up++;
	}
	write(1, "\n", 1);
}
