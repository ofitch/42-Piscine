/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofitch <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 15:14:46 by ofitch            #+#    #+#             */
/*   Updated: 2016/11/10 15:28:40 by ofitch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//Safe way: Create function ft_putchar to pass each char into write.
int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}
//Return nothing(void) takes char pointer to string array.
void	ft_putstr(char *str)
{
	//Iterate through current char in string array. Once it gets to null (\0) then stop.
	while (*str != '\0')
	{
		//Not safe way? use write function inside while loop and get the address of current char in string array &(*str)
		write(1, &(*str), 1);
		//Increase by 1 each time until it gets to null.
		str++;
	}
}

int		main(void)
{
	//Define string
	char *str;

	str = "My String";
	//Pass param str.
	ft_putstr(str);
}
