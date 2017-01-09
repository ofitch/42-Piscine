/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofitch <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 14:41:45 by ofitch            #+#    #+#             */
/*   Updated: 2016/11/03 22:12:07 by ofitch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int	*range;
	int i;

	if (min >= max)
	{
		return (NULL);
	}
	range = (int*)malloc(sizeof(*range) * (max - min));
	i = 0;
	while (min < max)
	{
		range[i] = min;
		i++;
		min++;
	}
	return (range);
}

int	main(void)
{
	int i = 0;
	int min = 0;
	int max = 9;
	int *nums = ft_range(min, max);

	while (i < 10)
	{
		printf("%d", nums[i]);
		i++;
	}
}
