/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_last_param_review.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofitch <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/17 01:54:49 by ofitch            #+#    #+#             */
/*   Updated: 2016/11/17 02:45:33 by ofitch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char **argv)
{
	int i;
	int last;
	
	last = argc - 1;
	i = 0;
	if (argc < 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	else
	{
		while (argv[last][i] != '\0')
		{
			write(1, &argv[last][i], 1);	
			i++;
		}
		write(1, "\n", 1);
	}
	return (0);
}
