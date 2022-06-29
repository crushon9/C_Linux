/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 14:06:32 by chsim             #+#    #+#             */
/*   Updated: 2022/05/01 19:29:22 by chsim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_10base(char *str)
{
	int	n;

	n = 0;
	while ('0' <= *str && *str <= '9')
	{
		n = n * 10 + ("0123456789"[*str - '0'] - '0');
		str++;
	}
	return (n);
}

int	ft_atoi(char *str)
{
	int	num;
	int	minus;

	while (*str == ' ' || ('\t' <= *str && *str <= '\r'))
		str++;
	minus = 1;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			minus = minus * -1;
		str++;
	}
	num = ft_10base(str);
	return (minus * num);
}
