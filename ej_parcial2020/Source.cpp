#include <stdio.h>
#include <stdint.h>

int FuncionEjemplo(int var1, char* var2);

int main()
{
	char* car = new char[5];
	car[0] = 'h';
	car[1] = 'o';
	car[2] = 'l';
	car[4] = 'a';

	int num = FuncionEjemplo(1, car);
}


int FuncionEjemplo(int var1, char* var2)
{
	//int* codigo;
	int* data;
	int* stack;

	static int contador;
	const int acumulador = 0;
	volatile char var3;

	int(*codigo)(int, char*) = &FuncionEjemplo;
	data = &contador;
	stack = &var1;

	printf("CODIGO: %p\n", &codigo);
	printf("DATA: %p\n", &data);
	printf("STACK: %p\n", &stack);

	return 0;
}