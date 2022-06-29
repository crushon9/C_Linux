/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 18:32:38 by chsim             #+#    #+#             */
/*   Updated: 2022/05/01 21:33:52 by chsim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoibasecase(char *base, int i, int j, int len)
{
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-'
			|| (9 <= base[i] && base[i] <= 13) || base[i] == ' ')
			return (0);
		i++;
	}
	len = i;
	if (len == 0 || len == 1)
		return (0);
	while (0 < i)
	{
		j = 1;
		while (j < i)
		{
			if (base[i - 1] == base[i - 1 - j])
				return (0);
			j++;
		}
		i--;
	}
	return (len);
}

int	ft_baseidx(char *str, char *base, int blen)
{
	int		bi;

	bi = 0;
	while (bi < blen)
	{
		if (*str == base[bi])
			return (bi);
		bi++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	num;
	int	minus;
	int	blen;

	blen = ft_atoibasecase(base, 0, 0, 0);
	if (blen == 0)
		return (0);
	while (*str == ' ' || ('\t' <= *str && *str <= '\r'))
		str++;
	minus = 1;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			minus = minus * -1;
		str++;
	}
	num = 0;
	while (*str && (ft_baseidx(str, base, blen) != -1))
	{
		num = num * blen + ft_baseidx(str, base, blen);
		str++;
	}
	return (minus * num);
}
