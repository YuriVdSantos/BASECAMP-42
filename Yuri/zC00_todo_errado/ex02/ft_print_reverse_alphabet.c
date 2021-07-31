#include <unistd.h>
#include <stdio.h>

int main (void)
{
	char a;
	a = (122);

	while (a > 96)
	{
		printf("%c, ", a);
		--a;
	}
	return(0);
}