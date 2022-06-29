/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 18:25:48 by chsim             #+#    #+#             */
/*   Updated: 2022/05/03 18:01:54 by chsim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	unsigned int	count;

	count = 0;
	i = 0;
	while (count < n && (*s1 || *s2))
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
		count++;
	}
	return (i);
}
