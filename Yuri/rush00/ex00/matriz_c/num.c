#include <stdio.h>

int main()
{
	int x, y;
	int rush[5][5];
	for (x = 0; x < 5; x++)
	{
		for (y = 0; y < 5; y++)
		{
			printf("Digite o valor %i %i: ", x, y);
			scanf("%i", &rush[x][y]);
		}
	}
	for(x = 0; x < 5; x++)
	{
		for(y = 0; y < 5; y++)
			printf("%i", rush[x][y]);
		printf("\n");
	}
return 0;
}