/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofitch <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 05:44:58 by ofitch            #+#    #+#             */
/*   Updated: 2016/11/12 19:07:00 by ofitch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	*ft_strcpy(char *s1, char *s2)
{
	//Create an index to iterate through Source string
	int i;

	i = 0;
	//While my string source is not null or have not finish the loop will keep going
	while (s2[i] != '\0')
	{
		//Assign Source string char to your destination.
		s1[i] = s2[i];
		write(1, s1[i], 1);
		//Increase by 1 so that will go through whole string until it reaches null
		 i++;
	}
	//Set destination to null so it will not store memory on another place.
	s1[i] = '\0';
	//Return destination string copied
}

int		main(void)
{
	//Destination needs specific size of array 
	ft_strcpy();
	//String source doesn't need it just point to there.
	

	
	}
