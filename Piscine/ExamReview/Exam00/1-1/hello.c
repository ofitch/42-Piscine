/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hello.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofitch <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 03:33:01 by ofitch            #+#    #+#             */
/*   Updated: 2016/11/10 04:01:59 by ofitch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	ft_hello(void)
{
	//Create character pointer to string array
	char *str;
	//Put your string into pointer to Str array with a new line at the end.
	str = "Hello World!\n";
	//While our current char at string is not null continue running
	while (*str != '\0')
	{
		//print the current char in the string array 
		ft_putchar(*str);
		//increase str by 1 until it reaches the end.
		str++;
	}
}

int		main(void)
{
	ft_hello();
}
