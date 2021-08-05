#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	int	unidade;
	int	dezena;
	int	centena;

	centena = 0;
	while (centena < 8)
	{
		dezena = centena + 1;
		while (dezena < 9)
		{
			unidade = dezena + 1;
			while (unidade < 10)
			{
				ft_putchar ('0' + centena);
				ft_putchar ('0' + dezena);
				ft_putchar ('0' + unidade);
				if (centena < 7)
					write (1, ", ", 2);
				++unidade;
			}
			++dezena;
		}
		++centena;
	}
}
