/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   open.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofitch <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 12:58:35 by ofitch            #+#    #+#             */
/*   Updated: 2016/11/10 14:29:35 by ofitch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

void	ft_putnbr(int nbr);

int main()
{
	int fd;

	fd = open("/dev/42", O_WRONLY | O_CREAT, S_IRUSR, S_IWUSR);
	if (fd == -1)
	{
		ft_putstr("open() failed\n");
	}
	ft_putnbr(fd);
	return (0);
}
