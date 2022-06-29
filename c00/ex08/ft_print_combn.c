/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 18:25:03 by chsim             #+#    #+#             */
/*   Updated: 2022/04/27 16:56:36 by chsim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_writen(int n, char *num)
{
	int	i;

	if (num[0] != '9' - (n - 1))
	{
		i = 0;
		while (i < n)
		{	
			write(1, &num[i], 1);
			i++;
		}
		write(1, ", ", 2);
	}
	else
	{
		i = 0;
		while (i < n)
		{	
			write(1, &num[i], 1);
			i++;
		}
	}
}

void	ft_dfs(int n, int dep, char *num)
{
	if (dep == (n - 1))
	{
		while (num[dep] <= '9' - (n - 1) + dep)
		{
			ft_writen(n, num);
			num[dep]++;
		}
	}
	else
	{	
		while (num[dep] <= '9' - (n - 1) + dep)
		{	
			num[dep + 1] = num[dep] + 1;
			ft_dfs(n, dep + 1, num);
			num[dep]++;
		}
	}
}

void	ft_print_combn(int n)
{
	char	num[10];

	num[0] = '0';
	ft_dfs(n, 0, num);
}
