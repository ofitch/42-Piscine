/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   only_z.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofitch <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 02:56:15 by ofitch            #+#    #+#             */
/*   Updated: 2016/11/10 03:13:12 by ofitch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		only_z(char c)
{
	write(1, &c, 1);
}

int		main()
{
	char c;
	
	c = 'z';
	only_z(c);
}
