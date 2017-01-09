/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofitch <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 12:52:49 by ofitch            #+#    #+#             */
/*   Updated: 2016/11/17 02:47:51 by ofitch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	//Variable to start count, we are using ascii value to print the value ''<< char
	int one;

	//Ascending order start from 0 until it reaches 9.
	one = '0';
	//Create a while loop to iterate through numbers 0 through 9
	while (one <= '9')
	{
		//Print each number with write function
		write(1,&one, 1);
		//Increment by 1 each time 
		one++;
	}
}
//Only to test. Prototype the function.
int		main(void)
{
	ft_print_numbers();
}
