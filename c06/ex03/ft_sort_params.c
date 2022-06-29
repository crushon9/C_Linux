/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 22:27:10 by chsim             #+#    #+#             */
/*   Updated: 2022/05/03 21:09:03 by chsim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (*s1 || *s2)
	{
		if (*s1 == *s2)
			i = 0;
		else
		{
			i = *s1 - *s2;
			return (i);
		}
		s1++;
		s2++;
	}
	return (i);
}

char	**ft_swap(int argc, char **argv, int i, int j)
{
	char	*temp;

	while (i < argc)
	{
		j = 1;
		while (i + j < argc)
		{
			if (ft_strcmp(argv[i], argv[i + j]) > 0)
			{
				temp = argv[i];
				argv[i] = argv[i + j];
				argv[i + j] = temp;
			}
			j++;
		}
		i++;
	}
	return (argv);
}

int	main(int argc, char **argv)
{
	int	i;
	int	len;

	argv = ft_swap(argc, argv, 1, 1);
	i = 1;
	while (i < argc)
	{
		len = 0;
		while (argv[i][len])
			len++;
		write(1, argv[i], len);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
