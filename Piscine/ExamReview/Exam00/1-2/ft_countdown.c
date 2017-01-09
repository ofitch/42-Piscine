/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countdown.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofitch <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 04:03:05 by ofitch            #+#    #+#             */
/*   Updated: 2016/11/10 04:48:06 by ofitch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_countdown(void)
{
	int number;
	//start counting from 9 ASCII char
	number = '9';
	//Stop when it reaches 0 and print ASCII char too, > or = to 0
	while (number >= '0')
	{	//use write and pass address of number 
		write(1, &number, 1);
		//decrease number by 1
		number--;
	}
	//add a newline at the end
	write(1, "\n", 1);
}

int		main(void)
{
	//declare function or prototype it
	ft_countdown();
}
