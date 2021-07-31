void	ft_putchar(char c);

void	box(int x, int y)
{
	int	hoz;
	int	vert;

	hoz = 1;
	while (hoz <= y)
	{
		vert = 1;
		while (vert <= x)
		{
			if (vert == 1 && hoz == 1)
				ft_putchar('A');
			else if ((vert == x && hoz == 1) || (vert == 1 && hoz == y))
				ft_putchar('C');
			else if (vert == x && hoz == y)
				ft_putchar ('A');
			else if ((vert == 1) || (vert == x) || (hoz == 1) || (hoz == y))
				ft_putchar('B');
			else
				ft_putchar(' ');
			vert++;
		}
		ft_putchar('\n');
		hoz++;
	}
}

void	rush(int x, int y)
{
	if (x < 0)
		x = x * -1;
	if (y < 0)
		y = y * -1;
	if (x == 0)
		x = x + 1;
	if (y == 0)
		y = y + 1;
	box(x, y);
}
