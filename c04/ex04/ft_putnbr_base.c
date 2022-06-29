/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrr_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 16:10:34 by chsim             #+#    #+#             */
/*   Updated: 2022/05/01 18:42:49 by chsim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_basecase(char *base, int i, int j, int len)
{
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		i++;
	}
	len = i;
	if (len == 0 || len == 1)
		return (0);
	while (0 < i)
	{
		j = 1;
		while (j < i)
		{
			if (base[i - 1] == base[i - 1 - j])
				return (0);
			j++;
		}
		i--;
	}
	return (len);
}

void	ft_print(long long num, char *base, long long blen)
{
	char	nc[34];
	int		i;

	i = 1;
	while (num >= blen)
	{
		nc[i] = base[num % blen];
		num = num / blen;
		i++;
	}
	nc[i] = base[num % blen];
	while (i > 0)
	{
		write(1, &nc[i], 1);
		i--;
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	long long	blen;
	long long	num;

	blen = ft_basecase(base, 0, 0, 0);
	if (blen == 0)
		return ;
	num = nbr;
	if (num < 0)
	{
		write(1, "-", 1);
		num = -num;
	}
	ft_print(num, base, blen);
}
