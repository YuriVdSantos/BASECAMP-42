#include <unistd.h>
#include <stdio.h>

int main (void)
{
	char a;
	a = (97);

	while (a < 123)
	{
		printf("%c, ", a);
		++a;
	}
	return(0);
}