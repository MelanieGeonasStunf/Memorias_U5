#include <stdio.h>


int var_global = 50;
int Funcion(int a, int b, int c, int* d);
int main()
{
	int local1 = 1;
	int local2 = 2;
	int local3 = 3;

	int* heap = new int;
	*heap = 0x1234;

	int suma = Funcion(local1, local2,local3, heap);
	printf("Memoria suma: %x", &suma);
}
int Funcion(int a, int b, int c, int*d)
{
	printf("Memoria local1: %x\n", &a);
	printf("Memoria local2: %x\n", &b);
	printf("Memoria local3: %x\n", &c);
	printf("Memoria heap: %x\n", &d);
	printf("Memoria var_global: %x\n", &var_global);
	return (a + b);
}