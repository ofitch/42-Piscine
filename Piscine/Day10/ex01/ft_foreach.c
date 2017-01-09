/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofitch <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 07:25:39 by ofitch            #+#    #+#             */
/*   Updated: 2016/11/08 14:00:29 by ofitch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>
int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
			nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		ft_putchar(nb + '0');
	}
		
}

void	ft_foreach(int *tab, int length, void(*f)(int))
{
	int i;
	
	i = 0;
	while (i < length)
	{
		f(tab[i]);
		i++;
	}
}

int		main(void)
{
	int tab[2];
	tab[0]=1;
	tab[1]=3;
	 ft_foreach(tab, 2, &ft_putnbr);
	return 0;
}
