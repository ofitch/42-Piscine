/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofitch <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 17:31:26 by ofitch            #+#    #+#             */
/*   Updated: 2016/11/16 19:38:43 by ofitch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_len(char *str)
{
	int i;
	
	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int		main(int argc, char **argv)
{
	int last;
	int i;

	i = 0;
	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	else
	{
		last = ft_len(argv[1]) - 1;
		while (argv[1][last] == ' ' || argv[1][last] == '\t')
		{
			last--;
		}
		while (argv[1][last])
		{
			if (argv[1][last] == ' ' || argv[1][last] == '\t')
			{
				last++;
				break;
			}	
			if (argv[1][last] >= 33 || argv[i][last] == 126)
			{
				last--;
			}
			else
				break;
		}
	
		while (argv[1][last])
		{		
			write(1, &argv[1][last], 1);
			last++;
			if (argv[1][last] == ' ' || argv[1][last] == '\t')
			{
				break;
			}
		}
		write(1, "\n", 1);
	}
	return (0);
}
