/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wryu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 10:33:18 by wryu              #+#    #+#             */
/*   Updated: 2022/04/24 20:38:15 by chsim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		countrow(int i, int j, int cnt, char *g_rc);
int		countcol(int i, int j, int cnt, char *g_rc);
void	diffrence_add(int i, int j, int s);

int	ft_count1(char *g_rc)
{
	int	i;
	int	j;
	int	cnt;

	i = 0;
	j = 0;
	cnt = 0;
	countrow(i, j, cnt, *g_rc);
	countcol(i, j, cnt, *g_rc);
}

int	countrow(int i, int j, int cnt, char *g_rc)
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
			diffrence_add(row, col, s);
		j = 0;
		i++;
	}
}

int	countcol(int i, int j, int cnt, char *g_rc)
{
	int	row;
	int	col;
	int	s;

	s = 1;
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
			i++;
		}
		if (cnt == 1)
			diffrence_add(row, col, s);
		i = 0;
		j++;
	}
}
