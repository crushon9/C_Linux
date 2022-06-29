/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 16:26:28 by chsim             #+#    #+#             */
/*   Updated: 2022/04/24 22:48:57 by chsim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_except(char *argv);
void	ft_ifs(char *argv, char g_rc[][4]);
void	ft_count1(char g_rc[][4]);
void	ft_putstr(char g_rc[][4]);

void	init(char g_rc[][4])
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < 4)
	{
		while (j < 4)
		{
			g_rc[i][j] = '0';
			j++;
		}
		i++;
		j = 0;
	}
}

int	main(int argc, char *argv[])
{
	char	g_rc[4][4];

	init(g_rc);
	if (argc != 2)
		return (0);
//	if (ft_except(argv[1]))
//		return (0);
	ft_ifs(argv[1], g_rc);
	ft_putstr(g_rc);
	ft_count1(g_rc);
	ft_putstr(g_rc);
	return (0);
} 
