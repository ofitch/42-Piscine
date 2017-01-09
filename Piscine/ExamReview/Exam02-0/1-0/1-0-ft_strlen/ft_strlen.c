/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofitch <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 06:32:02 by ofitch            #+#    #+#             */
/*   Updated: 2016/11/11 06:37:01 by ofitch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_strlen(char *str)
{
	//Create index to start a loop
	int i;

	i = 0;
	//While loop to iterate through the end of the string
	while (str[i] != '\0')
	{
		//Increase index;
		i++;
	}
	//Return index, this will give us the total amount instead of the char.
	return (i);
}

int		main(void)
{
	char *str;

	str = "my string";
	printf("%d", ft_strlen(str));
}
