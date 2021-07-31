#include <stdio.h>
#include <unistd.h>

int	main(void)
{
	int vu; //valor do usuario
	vu = -1;
	
	if (vu == 0 || vu > 0)
	{
		printf("P\n");
	}
	else 
	{
		printf("N\n");
	}	
	return (0);
}