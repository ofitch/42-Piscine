/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofitch <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 14:20:11 by ofitch            #+#    #+#             */
/*   Updated: 2016/11/08 16:25:36 by ofitch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdlib.h>
int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

int		ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	else if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		ft_putchar(nb + '0');
	}
	return (0);
}

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int *map;
	int i;
	
	i = 0;
	while (i != length)
	{
		map = (int*)malloc(sizeof(int)* length);
		map[i] = f(tab[i]);
		i++;
	}
	return (map);
}

int		main(void)
{
	int tab[4];
	tab[0] = 1;
	tab[1] = 2;
	tab[2] = 3;
	tab[3] = 4;

	ft_map(tab, 4, &ft_putnbr);
	return 0;
}
