/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup_review.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofitch <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/17 19:28:42 by ofitch            #+#    #+#             */
/*   Updated: 2016/11/17 19:50:43 by ofitch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		len(char *str)
{
	while (*str)
	{
		str++;
	}
	return (*str);
}

char	*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	char *dup;

	dup = (char*)malloc(sizeof(char) * len(src) + 1);
	if (dup == NULL)
	{
		return (0);
	}
	ft_strcpy(dup, src);
	return (dup);
	
}

int main(void)
{
	char *src;
	
	src = "This is duplicated";
	printf("%s", ft_strdup(src));
}
