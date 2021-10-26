#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>

int32_t Sumar_Array(int16_t* x, int16_t xn);

int main()
{
	int16_t vector[] = { 0,1,2,2,4,10 };
	printf("sumatoria %d\n", Sumar_Array(vector, 5));
	return 0;
}

int32_t Sumar_Array(int16_t* x, int16_t xn)
{
	int i;
	int32_t suma = 0;
	for (i = 0; i < xn; i++)
	{
		suma = suma + *x;
		x++;
	}
	return suma;
}