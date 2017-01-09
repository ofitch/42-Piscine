/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror_review.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofitch <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/17 19:59:30 by ofitch            #+#    #+#             */
/*   Updated: 2016/11/17 21:03:17 by ofitch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char **argv)
{
	int result;
	int i;

	i = 0;
	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	else
	{
		while (argv[1][i] != '\0')
		{
			if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
			{
				result = 'a' - (argv[1][i] - 'z');
				write(1, &result, 1);
			}
			else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
			{
				result = 'A' - (argv[1][i] - 'Z');
				write(1, &result, 1);
			}
			else
			{
				write(1, &argv[1][i], 1);
			}	
			i++;
		}
		write(1, "\n", 1);
	}
	return (0);
}
