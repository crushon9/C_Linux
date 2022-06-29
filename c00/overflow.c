#include <stdio.h>

void	ft_putnbr(int nb)
{
	char	a;
	char	b;

	a = nb % 10;
	b = nb % 10 + '0';
	printf("%d\n", a);
	printf("%d\n", b);
}

int	main(int a)
{
	ft_putnbr(-2147483648);
	return (0);
}
