/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofitch <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 18:57:19 by ofitch            #+#    #+#             */
/*   Updated: 2016/11/14 19:27:59 by ofitch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	//We need a holder so the variables will not mix
	int holder;
	//Holder will hold pointer to a
	holder = *a;
	//Pointer to now holds pointer to b
	*a = *b;
	//Pointer to b is now holding holder.
	*b = holder;
}

int		main(void)
{
	//To test define two int type variables
	int x = 1, y = 2;
	//Get the address of them &.
	int *a = &x, *b = &y;

	printf("No swapped a: %d\n", x);
	printf("No swapped b: %d\n", y);
	//Call function
	ft_swap(a, b);
	//Now both are swapped
	printf("swap a: %d\n", *a );
	printf("swap b: %d\n", *b);
}
