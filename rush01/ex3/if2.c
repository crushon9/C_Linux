/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   if2.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 18:42:26 by chsim             #+#    #+#             */
/*   Updated: 2022/04/24 22:58:07 by chsim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_if_j31(char *argv, int j, int k, char g_rc[][4])
{
	while (k < 4)
	{
		if (argv[j] == '3' && argv[8 + j] == '1')
		{
			g_rc[k][3] = '4';
			if (g_rc[k][0] == '1')
			{
				g_rc[k][1] = '3';
				g_rc[k][2] = '2';
			}
		}
		if (argv[j] == '1' && argv[8 + j] == '3')
		{
			g_rc[k][0] = '4';
			if (g_rc[k][3] == '1')
			{
				g_rc[k][1] = '2';
				g_rc[k][2] = '3';
			}
		}
		j = j + 2;
		k++;
	}
	return (0);
}

int	ft_if_i32(char *argv, int i, int k, char g_rc[][4])
{
	while (k < 4)
	{
		if (argv[i] == '3' && argv[8 + i] == '2')
		{
			g_rc[2][k] = '4';
			if (g_rc[0][k] == '2')
			{
				g_rc[1][k] = '3';
				g_rc[3][k] = '1';
			}
		}
		if (argv[i] == '2' && argv[8 + i] == '3')
		{
			g_rc[1][k] = '4';
			if (g_rc[3][k] == '2')
			{
				g_rc[0][k] = '1';
				g_rc[2][k] = '3';
			}
		}
		i = i + 2;
		k++;
	}
	return (0);
}

int	ft_if_j32(char *argv, int j, int k, char g_rc[][4])
{
	while (k < 4)
	{
		if (argv[j] == '3' && argv[8 + j] == '2')
		{
			g_rc[k][2] = '4';
			if (g_rc[k][0] == '2')
			{
				g_rc[k][1] = '3';
				g_rc[k][3] = '1';
			}
		}
		if (argv[j] == '2' && argv[8 + j] == '3')
		{
			g_rc[k][1] = '4';
			if (g_rc[k][3] == '2')
			{
				g_rc[k][0] = '1';
				g_rc[k][2] = '3';
			}
		}
		j = j + 2;
		k++;
	}
	return (0);
}

int	ft_if_i22(char *argv, int i, int k, char g_rc[][4])
{
	while (k < 4)
	{
		if (argv[i] == '2' && argv[8 + i] == '2')
		{
			if (g_rc[0][k] == '1')
			{
				g_rc[1][k] = '4';
				g_rc[2][k] = '2';
				g_rc[3][k] = '3';
			}
			if (g_rc[3][k] == '1')
			{
				g_rc[0][k] = '3';
				g_rc[1][k] = '2';
				g_rc[2][k] = '4';
			}
		}
		i = i + 2;
		k++;
	}
	return (0);
}

int	ft_if_j22(char *argv, int j, int k, char g_rc[][4])
{
	while (k < 4)
	{
		if (argv[j] == '2' && argv[8 + j] == '2')
		{
			if (g_rc[k][0] == '1')
			{
				g_rc[k][1] = '4';
				g_rc[k][2] = '2';
				g_rc[k][3] = '3';
			}
			if (g_rc[k][3] == '1')
			{
				g_rc[k][0] = '3';
				g_rc[k][1] = '2';
				g_rc[k][2] = '4';
			}
		}
		j = j + 2;
		k++;
	}
	return (0);
}
