#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	va;
	int	vb;

	va = *a;
	vb = *b;
	*a = va / vb;
	*b = va % vb;
}
