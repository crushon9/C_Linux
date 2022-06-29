/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putchar.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sangminl <sangminl@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 19:42:56 by sangminl          #+#    #+#             */
/*   Updated: 2022/04/24 20:38:19 by chsim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c, int i)
{
	write(1, &c, 1);
	if (!(i == 4 || i == 8 || i == 12 || i == 16))
		write(1, " ", 1);
}

void ft_putstr(char *g_rc)
{
	int	i;

	i = 1;
	while(*g_rc)
	{
		ft_putchar(*g_rc, i);
		if (i == 4 || i == 8 || i == 12 || i == 16)
		{
			write(1, "\n", 1);
		}
		g_rc++;
		i++;
	}
}
