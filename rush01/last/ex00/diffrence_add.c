/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   diffrence_add.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sangminl <sangminl@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 19:21:28 by sangminl          #+#    #+#             */
/*   Updated: 2022/04/24 22:50:11 by chsim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	diffrence_add(int i, int j, int s, char g_rc[][4])
{
	char	tmp;
	int		x;
	int		y;

	y = 0;
	tmp = 0;
	x = 0;
	while (s == 0 && y < 4)
	{
		tmp = tmp + g_rc[i][y];
		y++;
	}
	while (s == 1 && x < 4)
	{
		tmp = tmp + g_rc[x][j];
		x++;
	}
	tmp = 250 - tmp;
	if (tmp == '1' || tmp == '2' || tmp == '3' || tmp == '4')
		g_rc[i][j] = tmp;
}
