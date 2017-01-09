/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_alpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofitch <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 04:50:26 by ofitch            #+#    #+#             */
/*   Updated: 2016/11/10 05:22:56 by ofitch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	maff_alpha(void)
{
	int alphabet;
	int even;
	alphabet = 'a';
	while (alphabet <= 'z' || alphabet <= 'Z')
	{
		even = alphabet % 2;
		if (even == 0)
			write(1, )
	}
}
