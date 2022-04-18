#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void four_corners(int i, int j)
{
	if (i == 1 && j == 1) 
		ft_putchar('A');
	else if (i != 1 && j == 1 ) || (i == 1 && j != 1)
		ft_putchar('C');
	else if (i == 1 && j != 1 )
		ft_putchar('C');
	else
		ft_putchar('A');
}

void rush(int x, int y)
{
	int	i;
	int	j;

	i = 1;
	j = 1;
	while (j <= y)
	{
		while (i <= x)
		{
			if ((i == 1 || i == x) && (j == 1 || j == y))
				four_corners(i, j);
			else if ((i > 1 && i < x) && (j == 1 || j == y))
				ft_putchar('B');
			else if ((i == 1 || i == x) && (j > 1 && j < y))
				ft_putchar('B');
			else
				ft_putchar(' ');
			i++;
		}
		ft_putchar('\n');
		j++;
		i = 1;
	}
}


int main(void)
{
	rush(5,5);
	return (0);
}
