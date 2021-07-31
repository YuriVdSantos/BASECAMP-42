#include <unistd.h>
#include <stdio.h>

int main (void)
{
	int a;
	a = (0);

	while (a < 10)
	{
		printf("%i, ", a);
		++a;
	}
	return(0);
}