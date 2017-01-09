/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofitch <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 04:02:37 by ofitch            #+#    #+#             */
/*   Updated: 2016/11/16 16:06:49 by ofitch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char **argv)
{
	int i;

	if (argc == 1 || argc > 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	if (argc == 2)
	{
		i = 0;
		while (argv[1][i] != '\0')
		{
			if ((argv[1][i] >= 'a' && argv[1][i] <= 'm') || (argv[1][i] >= 'A' && argv[1][i] <= 'N'))
			{
				argv[1][i] += 13;
			}
			else if ((argv[1][i] >= 'n' && argv[1][i] <= 'z') || (argv[1][i] >= 'N' && argv[1][i] <= 'Z'))
			{
				argv[1][i] -= 13;
			}
			write(1, &argv[1][i], 1);
			i++;
		}
		write(1, "\n", 1);
	}
}