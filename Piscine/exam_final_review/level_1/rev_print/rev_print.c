/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofitch <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 19:37:41 by ofitch            #+#    #+#             */
/*   Updated: 2016/11/14 22:13:47 by ofitch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char **argv)
{
	int i;
	int j;
	int holder;

	if (argc < 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	if (argc >= 2)
	{
		i = 1;
		while (argv[i] != '\0')
		{
			j = 0;
			while (argv[i][j] != '\0')
			{
				holder = j;
				j++;
			}
			while (argv[i][holder] != '\0')
			{
				write(1, &argv[i][holder], 1);
				holder--;
			}
			i++;
		}
		write(1, "\n", 1);
	}
}
