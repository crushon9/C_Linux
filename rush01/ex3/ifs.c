/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ifs.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 18:42:26 by chsim             #+#    #+#             */
/*   Updated: 2022/04/24 22:16:02 by chsim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_if_i41(char *argv, int i, char g_rc[][4]);
void	ft_if_j41(char *argv, int j, char g_rc[][4]);
void	ft_if_i21(char *argv, int i, char g_rc[][4]);
void	ft_if_j21(char *argv, int j, char g_rc[][4]);
int		ft_if_i31(char *argv, int i, int count, char g_rc[][4]);
int		ft_if_j31(char *argv, int j, int count, char g_rc[][4]);
int		ft_if_i32(char *argv, int i, int count, char g_rc[][4]);
int		ft_if_j32(char *argv, int j, int count, char g_rc[][4]);
int		ft_if_i22(char *argv, int i, int count, char g_rc[][4]);
int		ft_if_j22(char *argv, int j, int count, char g_rc[][4]);

#include <stdio.h>
void	ft_ifs(char *argv, char g_rc[][4])
{
	int	count;

	count = 1;
	while (count)
	{
		count = 0;
		ft_if_i41(argv, 0, g_rc);
		ft_if_j41(argv, 16, g_rc);
		ft_if_i21(argv, 0, g_rc);
		ft_if_j21(argv, 16, g_rc);
		count = count + ft_if_i31(argv, 0, 0, g_rc);
		printf("[1]%d\n",count);
		count = count + ft_if_j31(argv, 16, 0, g_rc);
		printf("[2]%d\n",count);

		count = count + ft_if_i32(argv, 0, 0, g_rc);
		printf("[3]%d\n",count);

		count = count + ft_if_j32(argv, 16, 0, g_rc);
		printf("[4]%d\n",count);

		count = count + ft_if_i22(argv, 0, 0, g_rc);
		printf("[5]%d\n",count);

		count = count + ft_if_j22(argv, 16, 0, g_rc);
		printf("[6]%d\n",count);
	}
}
