/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 16:39:14 by chsim             #+#    #+#             */
/*   Updated: 2022/05/04 17:46:19 by chsim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_findlen(char *to_find, int len)
{
	while (to_find[len])
	len++;
	return (len);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	len;

	len = ft_findlen(to_find, 0);
	if (len == 0)
		return (str);
	i = 0;
	while (str[i])
	{
		j = 0;
		while (str[i + j] == to_find[j] && str[i + j] && j < len)
			j++;
		if (j == len)
			return (str + i);
		i++;
	}
	return (0);
}
