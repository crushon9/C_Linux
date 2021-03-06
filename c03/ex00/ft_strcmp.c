/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 17:23:46 by chsim             #+#    #+#             */
/*   Updated: 2022/05/03 20:35:10 by chsim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
