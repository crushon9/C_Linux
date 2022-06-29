/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 17:34:54 by chsim             #+#    #+#             */
/*   Updated: 2022/04/19 13:38:49 by chsim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_row(int x, char left, char middle, char right)
{
	int	i;

	if (x == 1)
	{
		ft_putchar(left);
		ft_putchar('\n');

	}
	if (x > 1)
	{	
		ft_putchar(left);
		i = 1;
		while (i <= x - 2)
		{
			ft_putchar(middle);
			i++;
		}
		ft_putchar(right);
		ft_putchar('\n');
	}
}

void	rush(int x, int y)
{
	int	i;

	if (y == 1)
	{
		ft_row(x, 'o', '-', 'o');
	}
	if (y > 1)
	{
		ft_row(x, 'o', '-', 'o');
		i = 1;
		while (i <= y - 2)
		{
			ft_row(x, '|', ' ', '|');
			i++;
		}
		ft_row(x, 'o', '-', 'o');
	}
}
