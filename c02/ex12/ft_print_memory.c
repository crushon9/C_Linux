/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 17:39:00 by chsim             #+#    #+#             */
/*   Updated: 2022/05/05 19:06:04 by chsim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_printaddr(void *addr, unsigned int st)
{
	unsigned long long	address;
	int					i;
	unsigned char		print[16];

	address = (unsigned long long)addr + st;
	i = 15;
	while (i >= 0)
	{
		print[i] = "0123456789abcdef"[address % 16];
		address = address / 16;
		i--;
	}
	write(1, print, 16);
	write(1, ": ", 2);
}

void	ft_16ascii(void *addr, unsigned int size, unsigned int st)
{
	unsigned char	*temp;
	unsigned int	i;
	unsigned int	end;

	temp = (unsigned char *)addr + st;
	i = 0;
	while ((i + st < size) && (i < 16))
	{
		write(1, &("0123456789abcdef"[temp[i] / 16]), 1);
		write(1, &("0123456789abcdef"[temp[i] % 16]), 1);
		i++;
		if (i % 2 == 0)
			write(1, " ", 1);
	}
	if (i < 16)
	{
		end = i * 2 + i / 2;
		write(1, "                                        ", 40 - end);
	}
}

void	ft_printstr(void *addr, unsigned int size, unsigned int st)
{
	unsigned char	*temp2;
	unsigned int	i;

	temp2 = (unsigned char *)addr + st;
	i = 0;
	while ((i < 16) && (i + st < size))
	{
		if (!(' ' <= temp2[i] && temp2[i] <= '~'))
			temp2[i] = '.';
		write(1, &temp2[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	st;

	st = 0;
	while (st < size)
	{
		ft_printaddr(addr, st);
		ft_16ascii(addr, size, st);
		ft_printstr(addr, size, st);
		st = st + 16;
	}
	return (addr);
}
