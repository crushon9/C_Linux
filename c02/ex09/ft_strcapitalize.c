/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 20:03:58 by chsim             #+#    #+#             */
/*   Updated: 2022/05/04 16:23:11 by chsim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_front(char *str)
{
	int	i;

	i = 1;
	if (('a' <= *(str) && *(str) <= 'z'))
	i = 0;
	else if (('A' <= *(str) && *(str) <= 'Z'))
	i = 0;
	else if (('0' <= *(str) && *(str) <= '9'))
	i = 0;
	return (i);
}

void	ft_charchange(char *str, char a, char b, int i)
{
	if (a <= *str && *str <= b)
		*str = (*str) + i;
}

char	*ft_strcapitalize(char *str)
{
	char	*tem;

	tem = str;
	ft_charchange(str, 'a', 'z', -32);
	str++;
	while (*str)
	{
		while (('A' <= *str && *str <= 'Z') || ('a' <= *str && *str <= 'z'))
		{
			if (ft_front(str - 1))
				ft_charchange(str, 'a', 'z', -32);
			else
				ft_charchange(str, 'A', 'Z', 32);
			str++;
		}
		str++;
	}
	return (tem);
}
