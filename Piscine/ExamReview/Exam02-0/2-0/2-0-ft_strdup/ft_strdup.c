/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofitch <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 15:32:26 by ofitch            #+#    #+#             */
/*   Updated: 2016/11/11 15:58:37 by ofitch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

//Create strcpy to copy the string we are going to store in Malloc
char	*ft_strcpy(char *dest, char *src)
{
	//Initialize in 0
	int i;
	i = 0;
	//Loop through source string until it reaches null
	while (src[i] != '\0')
	{
		//Pass each char from source into destination and increment by one so it will repeat until reached null
		dest[i] = src[i];
		i++;
	}
	//Initialize dest to NULL 
	dest[i] = '\0';
	//return null
	return (dest);
}

char	*ft_strdup(char *src)
{
	//Get length of the string so Malloc knows how much space it needs
	int len;
	//Create a pointer to the destination
	char *dest;
	//While the source length is not null increment by one until it reaches null and just increment count to return length.
	while (src[len] != '\0')
	{
		len++;
	}
	//Store your source into malloc
	dest = malloc(len + 1);
	// If destination is null end func.
	if (dest == NULL)
	{
		return (0);
	}
	//use string copy function to copy the source into destination
	ft_strcpy(dest, src);
	//return destination.
	return (dest);
}

int 	main()
{
	char *src;

	src = "string!";
	printf("%s", ft_strdup(src));
}
