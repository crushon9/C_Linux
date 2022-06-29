/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   if1.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 18:42:26 by chsim             #+#    #+#             */
/*   Updated: 2022/04/24 20:41:46 by chsim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_if_i41(char *argv, int i)
{
	while (i < 7)
	{
		if (argv[i] == '4' && argv[8 + i] == '1')
		{
			g_rc[0][i] = '1';
			g_rc[1][i] = '2';
			g_rc[2][i] = '3';
			g_rc[3][i] = '4';
		}
		if (argv[i] == '1' && argv[8 + i] == '4')
		{
			g_rc[0][i] = '4';
			g_rc[1][i] = '3';
			g_rc[2][i] = '2';
			g_rc[3][i] = '1';
		}
		i = i + 2;
	}
}

void	ft_if_j41(char *argv, int j)
{
	while (j < 23)
	{
		if (argv[j] == '4' && argv[8 + j] == '1')
		{
			g_rc[j][0] = '1';
			g_rc[j][1] = '2';
			g_rc[j][2] = '3';
			g_rc[j][3] = '4';
		}
		if (argv[j] == '1' && argv[8 + j] == '4')
		{
			g_rc[j][0] = '4';
			g_rc[j][1] = '3';
			g_rc[j][2] = '2';
			g_rc[j][3] = '1';
		}
		j = j + 2;
	}
}

void	ft_if_i21(char *argv, int i)
{
	while (i < 7)
	{
		if (argv[i] == '2' && argv[8 + i] == '1')
		{
			g_rc[0][i] = '3';
			g_rc[3][i] = '4';
		}	
		if (argv[i] == '1' && argv[8 + i] == '2')
		{
			g_rc[0][i] = '4';
			g_rc[3][i] = '3';
		}
		i = i + 2;
	}
}

void	ft_if_j21(char *argv, int j)
{
	while (j < 23)
	{
		if (argv[j] == '2' && argv[8 + j] == '1')
		{
			g_rc[j][0] = '3';
			g_rc[j][3] = '4';
		}	
		if (argv[j] == '1' && argv[8 + j] == '2')
		{
			g_rc[j][0] = '4';
			g_rc[j][3] = '3';
		}
		j = j + 2;
	}
}

int	ft_if_i31(char *argv, int i, int count)
{
	while (i < 7)
	{
		if (argv[i] == '3' && argv[8 + i] == '1')
		{
			g_rc[3][i] = '4';
			if (g_rc[0][i] == '1')
			{
				g_rc[1][i] = '3';
				g_rc[2][i] = '2';
				count++;
			}
		}
		if (argv[i] == '1' && argv[8 + i] == '3')
		{
			g_rc[0][i] = '4';
			if (g_rc[3][i] == '1')
			{
				g_rc[1][i] = '2';
				g_rc[2][i] = '3';
				count++;
			}
		}
		i = i + 2;
	}
	return (count);
}
