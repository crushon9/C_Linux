#include <unistd.h>

int	check_map(char *map, int i)
{
	int	i2;

	i2 = 0;
	while (i2 < i && i)
	{
		if (map[i2] == map[i]
			|| map[i2] + (i - i2) == map[i]
			|| map[i2] - (i - i2) == map[i])
			return (0);
		i2++;
	}
	return (1);
}

void	find_queens(char *map, int i, char curr, int *count)
{
	if (curr <= '9')
	{
		map[i] = curr;
		if (check_map(map, i))
		{
			find_queens(map, i + 1, '0', count);
			if (i == 9)
			{
				write(1, map, 10);
				write(1, "\n", 1);
				(*count)++;
			}
		}
		find_queens(map, i, curr + 1, count);
	}
}

int	ft_ten_queens_puzzle(void)
{
	char	map[11];
	int		count;

	count = 0;
	find_queens(map, 0, '0', &count);
	return (count);
}

#include <stdio.h>
int main()
{
	int result;
	result = ft_ten_queens_puzzle();
	printf("%d", result);
}