#include <stdio.h>
#include <stdint.h>

int main()
{
	int8_t* p_8;
	int16_t* p_16;
	int32_t* p_32;
	float* p_float;
	double* p_double;

	printf("Tamanio int8*: %d \n", (int)sizeof(p_8));//ver clase 26/10 (1.30 clase aprox)
	printf("Tamanio int16*: %d \n", (int)sizeof(p_16));
	printf("Tamanio int32*: %d \n", (int)sizeof(p_32));
	printf("Tamanio float*: %d \n", (int)sizeof(p_float));
	printf("Tamanio p_double*: %d \n", (int)sizeof(p_double));

}