/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy_review.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofitch <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/17 03:06:53 by ofitch            #+#    #+#             */
/*   Updated: 2016/11/17 03:31:30 by ofitch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0')
	{
		s2[i] = s1[i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}

//OR

char	*ft_strcopy(char *dest, char *src)
{
	while(*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (dest);
}

int		main(void)
{
	/*
	char *s1;
	char s2[25];

	s1 = "This string is copied.";
	printf("%s\n", ft_strcpy(s1, s2));
	*/
	char *src;
	char dest[50];

	src = "This string is copied with pointers";
	printf("%s", ft_strcopy(dest, src));
	return (0);
}

