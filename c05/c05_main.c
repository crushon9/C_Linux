/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C05_main.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joushin <joushin@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 10:16:57 by joushin           #+#    #+#             */
/*   Updated: 2022/05/03 21:29:24 by chsim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include"ex00/ft_iterative_factorial.c"
#include"ex01/ft_recursive_factorial.c"
#include"ex02/ft_iterative_power.c"
#include"ex03/ft_recursive_power.c"
#include"ex04/ft_fibonacci.c"
#include"ex05/ft_sqrt.c"
#include"ex06/ft_is_prime.c"
#include"ex07/ft_find_next_prime.c"
//#include"ex08/ft_ten_queens_puzzle.c"
int main()
{

	{
		printf("\n------------------ex00 factorial----------------------\n");
		int a = -1;
		int result =ft_iterativei_factorial(a);
		printf("input : %d result : %d\n ", a, result);
		int a1 = 0;
		int result1 =ft_iterativei_factorial(a1);
		printf("input : %d result : %d\n ", a1, result1);
		int a2 = 1;
		int result2 =ft_iterativei_factorial(a2);
		printf("input : %d result : %d\n ", a2, result2);
		int a3 = 5;
		int result3 =ft_iterativei_factorial(a3);
		printf("input : %d result : %d\n ", a3, result3);
	}
	{
		printf("\n------------------ex01 factorial-----------------------\n");
		int a = -1;
		int result =ft_recursive_actorial(a);
		printf("input : %d result : %d\n ", a, result);
		int a1 = 0;
		int result1 =ft_recursive_actorial(a1);
		printf("input : %d result : %d\n ", a1, result1);
		int a2 = 1;
		int result2 =ft_recursive_actorial(a2);
		printf("input : %d result : %d\n ", a2, result2);
		int a3 = 5;
		int result3 =ft_recursive_actorial(a3);
		printf("input : %d result : %d\n ", a3, result3);
	}
	{
		printf("\n------------------ex02 power---------------------------\n");
		int nb = -2;
		int power = 10;
		printf("input : nb %d power %d\n", nb, power );
		int	result = ft_iterative_power(nb, power);
		printf("result : %d\n", result);
	}
	{
		printf("\n------------------ex03 power---------------------------\n");
		int nb = -2;
		int power = 10;
		printf("input : nb %d power %d\n",nb,power );
		int	result = ft_iterative_power(nb, power);
		printf("result : %d\n", result);
	}
	{
		printf("\n------------------ex04 fibonacci-----------------------\n");
		printf("   fibonacci : 0 1 1 2 3 5 8 13\n");
		printf("ft_fibonacci : %d %d %d %d %d %d %d %d\n", ft_fibonacci(0), ft_fibonacci(1), ft_fibonacci(2), ft_fibonacci(3), ft_fibonacci(4), ft_fibonacci(5), ft_fibonacci(6), ft_fibonacci(7));
	}
	{
		printf("\n------------------ex05 sqrt-----------------------------\n");
		int	input1 = 3;
		int result1 = ft_sqrt(input1);
		printf("input : %d result : %d\n",input1, result1);
		int	input2 = 49;
		int result2 = ft_sqrt(input2);
		printf("input : %d result : %d\n",input2, result2);
		int	input3 = 1;
		int result3 = ft_sqrt(input3);
		printf("input : %d result : %d\n",input3, result3);
		int	input4 = 0;
		int result4 = ft_sqrt(input4);
		printf("input : %d result : %d\n",input4, result4);
		int	input5 = -3;
		int result5 = ft_sqrt(input5);
		printf("input : %d result : %d\n",input5, result5);

	}
	{
		printf("\n------------------ex06 prime----------------------------\n");
		int	input;

		input = 0;
		printf("input : %d\n",input);
		int result = ft_is_prime(input);
		printf("result : %d\n", result);
	}
	{
		printf("\n------------------ex07 next prime-----------------------\n");
		int	input = 4;
		int result = ft_find_next_prime(input);
		printf("input : %d\nresult : %d\n", input, result);
	}
/*	{
		printf("\n----------------------ex08----------------------------\n");
		int result = ft_ten_queens_puzzle();
		printf("\n\n\n\n result ::::: %d\n\n\n\n",result);
	}*/
	return 0;
}
