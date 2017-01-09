/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_rec.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofitch <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 16:06:01 by ofitch            #+#    #+#             */
/*   Updated: 2016/11/11 16:18:18 by ofitch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		myAtoi(char *ato)
{
	int	res;
	int sign;

	res = 0;
	sign = 1;
	while (*ato == ' ' || *ato == '\t' || *ato == '\n' || *ato == '\f' || *ato == '\r')
	{
		ato++;
	}
	if (*ato == '-')
	{
		sign = -1;
	}
	if ((*ato == '-') || (*ato == '+'))
	{
		ato++;
	}
	while (*ato >= '0' && *ato <= '9')
	{
		res = res * 10 + *ato - '0';
		ato++;
	}
	return (sign*res);
}

int		main(void)
{
	char *ato;
	ato = "   12313";
	printf("%d", myAtoi(ato));
}
