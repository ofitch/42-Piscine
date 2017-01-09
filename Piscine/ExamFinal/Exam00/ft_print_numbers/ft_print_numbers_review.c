/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers_review.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofitch <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/17 02:48:06 by ofitch            #+#    #+#             */
/*   Updated: 2016/11/17 02:54:49 by ofitch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	int i;

	i = '0';
	while (i <= '9')
	{
		write(1, &i, 1);
		i++;
	}
	write(1, "\n", 1);
}

// OR //
void	ft_print_nb(void)
{
	write(1, "0123456789""\n", 11);
}

int		main(void)
{
	ft_print_numbers();
	ft_print_nb();
}
