/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   if1.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 18:42:26 by chsim             #+#    #+#             */
/*   Updated: 2022/04/24 23:05:13 by chsim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_if_i41(char *argv, int i, char g_rc[][4])
{
	int	k;

	k = 0;
	while (k < 4)
	{
		if (argv[i] == '4' && argv[8 + i] == '1')
		{
			g_rc[0][k] = '1';
			g_rc[1][k] = '2';
			g_rc[2][k] = '3';
			g_rc[3][k] = '4';
		}
		if (argv[i] == '1' && argv[8 + i] == '4')
		{
			g_rc[0][k] = '4';
			g_rc[1][k] = '3';
			g_rc[2][k] = '2';
			g_rc[3][k] = '1';
		}
		i = i + 2;
		k++;
	}
}

void	ft_if_j41(char *argv, int j, char g_rc[][4])
{
	int	k;

	k = 0;
	while (k < 4)
	{
		if (argv[j] == '4' && argv[8 + j] == '1')
		{
			g_rc[k][0] = '1';
			g_rc[k][1] = '2';
			g_rc[k][2] = '3';
			g_rc[k][3] = '4';
		}
		if (argv[j] == '1' && argv[8 + j] == '4')
		{
			g_rc[k][0] = '4';
			g_rc[k][1] = '3';
			g_rc[k][2] = '2';
			g_rc[k][3] = '1';
		}
		j = j + 2;
		k++;
	}
}

void	ft_if_i21(char *argv, int i, char g_rc[][4])
{
	int	k;

	k = 0;
	while (k < 4)
	{
		if (argv[i] == '2' && argv[8 + i] == '1')
		{
			g_rc[0][k] = '3';
			g_rc[3][k] = '4';
		}	
		if (argv[i] == '1' && argv[8 + i] == '2')
		{
			g_rc[0][k] = '4';
			g_rc[3][k] = '3';
		}
		i = i + 2;
		k++;
	}
}

void	ft_if_j21(char *argv, int j, char g_rc[][4])
{
	int	k;

	k = 0;
	while (k < 4)
	{
		if (argv[j] == '2' && argv[8 + j] == '1')
		{
			g_rc[k][0] = '3';
			g_rc[k][3] = '4';
		}	
		if (argv[j] == '1' && argv[8 + j] == '2')
		{
			g_rc[k][0] = '4';
			g_rc[k][3] = '3';
		}
		j = j + 2;
		k++;
	}
}

void	ft_if_i31(char *argv, int i, int k, char g_rc[][4])
{
	while (k < 4)
	{
		if (argv[i] == '3' && argv[8 + i] == '1')
		{
			g_rc[3][k] = '4';
			if (g_rc[0][k] == '1')
			{
				g_rc[1][k] = '3';
				g_rc[2][k] = '2';
			}
		}
		if (argv[i] == '1' && argv[8 + i] == '3')
		{
			g_rc[0][k] = '4';
			if (g_rc[3][k] == '1')
			{
				g_rc[1][k] = '2';
				g_rc[2][k] = '3';
			}
		}
		i = i + 2;
		k++;
	}
}
