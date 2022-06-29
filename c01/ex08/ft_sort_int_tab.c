/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 17:30:45 by chsim             #+#    #+#             */
/*   Updated: 2022/04/19 18:59:18 by chsim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (i + j < size)
		{	
			if (tab[i] > tab[i + j])
			{
				temp = tab[i];
				tab[i] = tab[i + j];
				tab[i + j] = temp;
			}
			j++;
		}
		i++;
	}
}
