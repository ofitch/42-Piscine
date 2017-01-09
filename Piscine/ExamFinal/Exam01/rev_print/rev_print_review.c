/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print_review.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofitch <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/17 04:44:43 by ofitch            #+#    #+#             */
/*   Updated: 2016/11/17 05:03:33 by ofitch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		len(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int		main(int argc, char **argv)
{
	int last;

	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	else
	{
		last = len(argv[1]) - 1;
		while (argv[1][last])
		{
			write(1, &argv[1][last], 1);
			last--;
		}
		write(1, "\n", 1);
	}
	return (0);
}
