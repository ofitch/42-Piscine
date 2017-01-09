/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word_review.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofitch <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/17 15:18:29 by ofitch            #+#    #+#             */
/*   Updated: 2016/11/17 15:32:15 by ofitch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	else
	{
		while (argv[1][i] == ' ' || argv[1][i] == '\t')
		{
			i++;
		}
		while (argv[1][i] != '\0')
		{
			if (argv[1][i] >= 33 && argv[1][i] <= 126)
			write(1, &argv[1][i], 1);
			else if (argv[1][i] == ' ' || argv[1][i] == '\t')
				break;
			i++;
		}
		write(1, "\n", 1);
	}
	return (0);
}
