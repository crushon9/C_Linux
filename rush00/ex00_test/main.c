/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 15:35:36 by chsim             #+#    #+#             */
/*   Updated: 2022/04/19 13:35:12 by chsim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	rush(int x, int y);

int	main(int argc, char *argv[])
{
	if (argc != 3)
		return (0);
	rush(atoi(argv[1]), atoi(argv[2]));
	return (0);
}