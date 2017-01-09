/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofitch <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 23:14:28 by ofitch            #+#    #+#             */
/*   Updated: 2016/11/16 00:04:14 by ofitch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int i;
	char *dup;
	static char *dup_offset;

	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	dup = (char*)malloc(sizeof(char) * i + 1);
	if (dup == NULL)
	{
		return (char*)NULL;
	}
	dup_offset = dup;
	while (*src)
	{
		*dup_offset = *src;
		dup_offset++;
		src++;
	}
	*dup_offset = '\0';
	return (dup);
	
}

int		main(void)
{
	char *src;

	src = "This is a duplicate";
	printf("%s", ft_strdup(src));
	return (0);
}
