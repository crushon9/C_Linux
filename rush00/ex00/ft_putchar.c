/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 15:35:36 by chsim             #+#    #+#             */
/*   Updated: 2022/04/17 15:48:22 by chsim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_row(int x, char left, char middle, char right);
void	rush(int x, int y);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
