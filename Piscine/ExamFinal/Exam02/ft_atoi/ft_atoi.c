/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofitch <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 22:30:19 by ofitch            #+#    #+#             */
/*   Updated: 2016/11/17 17:55:49 by ofitch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_atoi(const char *str)
{
	//Result will hold your result
	int result;
	//Sign is for negative numbers
	int sign;
	
	//Result will hold the result of the opperation
	result = 0;
	//Sign is equal to one to change the negative number 
	sign = 1;
	//If current char in string encounters any of this non-printable char then keep going
	if (*str == ' ' || *str == '\n' || *str == '\t' || *str == '\r' || *str == '\f' || *str == '\v')
	{
		str++;
	}
	//If current char in string is negative then 
	if (*str == '-')
	{
		//assign negative one to make it positive.
		sign = -1;
	}
	//If current char in string is negative or positive then we ignore and keep going
	if ((*str == '-') || (*str == '+'))
	{
		str++;
	}
	//While current char on string is between 0 or 9 in ascii value then we set the result times 10 plus current char on string
	//minus 0 in ASCII value. And we keep going in the string.
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + *str - '0';
		str++;
	}
	//Return sign if it's negative then the result changed to negative if it's positive the result remains positive.
	return (sign*result);
}

int		main(void)
{
	char *str;
	str = "-0092399";
	printf("%d", ft_atoi(str));
}
