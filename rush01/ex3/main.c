/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 16:26:28 by chsim             #+#    #+#             */
/*   Updated: 2022/04/24 20:56:57 by chsim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

extern char	g_rc[4][4];

g_rc = {'0', };

int		ft_except(char *argv);
void	ft_ifs(char *argv);
void	ft_count1(char *g_rc);
void	ft_putstr(char *g_rc);

int	main(int argc, char *argv[])
{
	if (argc != 2)
		return (0);
	if (ft_except(argv[1]))
		return (0);
	ft_ifs(argv[1]);
	ft_count1(g_rc);
	ft_putstr(g_rc);
	return (0);
} 
