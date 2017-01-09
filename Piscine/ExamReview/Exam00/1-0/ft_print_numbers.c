/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofitch <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 03:17:47 by ofitch            #+#    #+#             */
/*   Updated: 2016/11/10 03:31:14 by ofitch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	ft_print_numbers(void)
{
	int i;
	
	//We are seeking the value in the ASCII table not as an int.
	i = '0';
	//Create while loop to print from 0 to 9.	
	while (i <= '9')
		{
			//print numbers until it reaches 9.
			ft_putchar(i);
			//until i reaches 9 it will add the next value and print it.
			i++;
		}
}

int		main(void)
{
	ft_print_numbers();
}
