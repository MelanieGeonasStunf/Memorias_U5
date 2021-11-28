#include "matematica(ej10).h"

inline int32_t Sumar_Array(int16_t* x, int16_t xn)
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