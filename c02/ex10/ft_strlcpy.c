/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 22:23:01 by chsim             #+#    #+#             */
/*   Updated: 2022/05/03 20:19:41 by chsim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{	
	unsigned int	slen;
	unsigned int	count;

	slen = 0;
	while (src[slen])
		slen++;
	if (size == 0)
		return (slen);
	count = 0;
	while (count < size - 1 && *src)
	{
		*dest = *src;
		src++;
		dest++;
		count++;
	}
	while (count < size)
	{
		*dest = '\0';
		dest++;
		count++;
	}
	return (slen);
}
