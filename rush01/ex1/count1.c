/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wryu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 10:33:18 by wryu              #+#    #+#             */
/*   Updated: 2022/04/24 22:46:39 by chsim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	countrow(int i, int j, int cnt, char g_rc[][4]);
void	countcol(int i, int j, int cnt, char g_rc[][4]);
void	diffrence_add(int i, int j, int s, char g_rc[][4]);

void	ft_count1(char g_rc[][4])
{
	countrow(0, 0, 0, g_rc);
	countcol(0, 0, 0, g_rc);
}

void	countrow(int i, int j, int cnt, char g_rc[][4])
{
	int	row;
	int	col;
	int	s;

	s = 0;
	while (i < 4)
	{
		while (j < 4)
		{
			if (g_rc[i][j] == '0')
			{
				cnt++;
				row = i;
				col = j;
			}
			j++;
		}
		if (cnt == 1)
		{
			diffrence_add(row, col, s, g_rc);
		}
		cnt = 0;
		j = 0;
		i++;
	}
}

void	countcol(int i, int j, int cnt, char g_rc[][4])
{
	int	row;
	int	col;
	int	s;

	s = 1;
	while (j < 4)
	{
		while (i < 4)
		{
			if (g_rc[i][j] == '0')
			{
				cnt++;
				row = i;
				col = j;
			}
			i++;
		}
		if (cnt == 1)
			diffrence_add(row, col, s, g_rc);
		cnt = 0;
		i = 0;
		j++;
	}
}
