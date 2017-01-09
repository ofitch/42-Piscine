/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   interdany.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofitch <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/17 22:10:38 by ofitch            #+#    #+#             */
/*   Updated: 2016/11/17 23:15:38 by ofitch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int comp(char *s, char c, int index)
{
	int i;
	i =0;
	while(i < index)
	{
		if(s[i] == c)
			return(1);
		i++;
	}
	return(0);
}

void pito(char *s1, char *s2)
{
	int i;
	int j;
	i = 0;
	while(s1[i] !='\0')
	{
		if(comp(s1, s1[i], i)== 0)
		{	
			j = 0;
			while(s2[j])
			{
				if(s1[i] == s2[j])
				{
					write(1, &s1[i], 1);
					break;
				}
				j++;
			}
		}
		i++;
	}
}

int main(int ac, char **av)
{
	if(ac == 3)
		pito(av[1],av[2]);
	write(1, "\n", 1);
	return(0);
}
