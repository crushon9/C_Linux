/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ifss.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 22:59:45 by chsim             #+#    #+#             */
/*   Updated: 2022/04/24 23:08:22 by chsim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_if_i41(char *argv, int i, char g_rc[][4]);
void	ft_if_j41(char *argv, int j, char g_rc[][4]);
void	ft_if_i21(char *argv, int i, char g_rc[][4]);
void	ft_if_j21(char *argv, int j, char g_rc[][4]);
void	ft_if_i31(char *argv, int i, int k, char g_rc[][4]);
void	ft_if_j31(char *argv, int j, int k, char g_rc[][4]);
void	ft_if_i32(char *argv, int i, int k, char g_rc[][4]);
void	ft_if_j32(char *argv, int j, int k, char g_rc[][4]);
void	ft_if_i22(char *argv, int i, int k, char g_rc[][4]);
void	ft_if_j22(char *argv, int j, int k, char g_rc[][4]);

void	ft_ifs(char *argv, char g_rc[][4])
{
	ft_if_i41(argv, 0, g_rc);
	ft_if_j41(argv, 16, g_rc);
	ft_if_i21(argv, 0, g_rc);
	ft_if_j21(argv, 16, g_rc);
	ft_if_i31(argv, 0, 0, g_rc);
	ft_if_j31(argv, 16, 0, g_rc);
	ft_if_i32(argv, 0, 0, g_rc);
	ft_if_j32(argv, 16, 0, g_rc);
	ft_if_i22(argv, 0, 0, g_rc);
	ft_if_j22(argv, 16, 0, g_rc);
}
