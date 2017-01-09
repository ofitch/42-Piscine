/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countdown.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofitch <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 15:04:47 by ofitch            #+#    #+#             */
/*   Updated: 2016/11/10 15:12:52 by ofitch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

//The function will not return nor take any def type.
void	ft_countdown(void)
{
	// create an int var and set it to 9 in ASCII char because we are counting in DESCENDING order.
	int number;

	number = '9';
	//When number reaches 0, the loop will stop
	while (number >= '0')
	{
		//Starting from 9 print all the number until it reaches 0 pass address of var number to write funct.
		write(1, &number, 1);
		//Decrease numbe by 1 each time.
		number--;
	}
	//Create a new line at the end of the loop.
	write(1, "\n", 1);
}

int main()
{
	//Call the function
	ft_countdown();
}
