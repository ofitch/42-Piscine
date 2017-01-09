/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofitch <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 18:13:27 by ofitch            #+#    #+#             */
/*   Updated: 2016/11/14 18:56:38 by ofitch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strlen(char *str)
{
	//Define a counter that starts at 0
	int i;

	i = 0;
	//Iterate through the whole string with a while loop.
	while (str[i] != '\0')
	{
		//Increase counter.
		i++;
	}
	//Return counter. Which is the number of characters in string array
	return (i);
}

int		main(void)
{
	char str[10] = "Hello";
	printf("%d", ft_strlen(str));
}
