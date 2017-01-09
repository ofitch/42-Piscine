/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofitch <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 14:48:24 by ofitch            #+#    #+#             */
/*   Updated: 2016/11/11 15:36:19 by ofitch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_atoi(const char *str)
{
	int res = 0; //Initialize result
	int sign = 1; //Initialize sign as positive
	int i = 0; //Initialize index of first digit

	//If is a negative number, then update the sign
	if (str[0] == '-')
	{
		sign = -1;
		i++; //Update index of first digit
	}

	//Iterate through all digits and update the result 
	while (str[i] != '\0')
	{
		res = (res*10) + str[i] - '0';
			i ++;
	}
	return (res*sign);
}

int main()
{
	char str[] = "-123123";
	int val = ft_atoi(str);
	printf("%d", val);
	return (0);
}
