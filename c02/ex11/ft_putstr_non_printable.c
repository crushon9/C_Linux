/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 16:08:42 by chsim             #+#    #+#             */
/*   Updated: 2022/05/04 16:51:09 by chsim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	unsigned int	i;
	unsigned char	*strr;

	strr = (unsigned char *)str;
	i = 0;
	while (strr[i])
	{
		if (' ' <= strr[i] && strr[i] <= '~')
			write(1, &strr[i], 1);
		else
		{
			write(1, "\\", 1);
			write(1, &"0123456789abcdef"[strr[i] / 16], 1);
			write(1, &"0123456789abcdef"[strr[i] % 16], 1);
		}
		i++;
	}
}
