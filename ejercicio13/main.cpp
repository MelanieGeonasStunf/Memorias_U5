#include <stdio.h>
#include <stdlib.h>

int global = 0;

int main()
{	
	for (int i = 0; i < 5; i++)
	{
		global = global + 1;
	}
	printf("Global: %d\n", global);
	printf("Ubicacion: %10p", &global);
}