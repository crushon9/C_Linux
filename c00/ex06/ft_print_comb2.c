/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 22:53:59 by chsim             #+#    #+#             */
/*   Updated: 2022/04/20 18:44:32 by chsim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write2(int i, int j)
{
	char	i_q;
	char	i_r;
	char	j_q;
	char	j_r;

	i_q = i / 10 + '0';
	i_r = i % 10 + '0';
	j_q = j / 10 + '0';
	j_r = j % 10 + '0';
	write(1, &i_q, 1);
	write(1, &i_r, 1);
	write(1, " ", 1);
	write(1, &j_q, 1);
	write(1, &j_r, 1);
	if (!(i_q == '9' && i_r == '8' && j_q == '9' && j_r == '9'))
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb2(void)
{
	int		i;
	int		j;

	i = 0;
	while (i <= 98)
	{
		j = i + 1;
		while (j <= 99)
		{
			ft_write2(i, j);
			j++;
		}
		i++;
	}
}
