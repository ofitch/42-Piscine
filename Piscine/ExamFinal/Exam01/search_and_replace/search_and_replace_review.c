/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace_review.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofitch <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/17 16:33:52 by ofitch            #+#    #+#             */
/*   Updated: 2016/11/17 17:02:28 by ofitch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc != 4)
	{
		write(1, "\n", 1);
		return (0);
	}
	else
	{
		while (argv[1][i] != '\0')
		{
			if (argv[1][i] != argv[2][0])
			{
				write(1, &argv[1][i], 1);
			}
			else
			{
				write(1, &argv[3][0], 1);
			}
			i++;
		}
		write(1, "\n", 1);
	}
	return (0);
}
