
#include <stdio.h>
#include <stdlib.h>

//extern char etext, edata, end;//para exportar datos

 char* edata, end;

int Suma(int a, int b);

int var1;
int var2 = 123;

int main()
{
	char* etext;
	char* palabra = new char;
	palabra = 0;
	edata = palabra;

	printf("------------------ETEXT----------------\n");
	printf("etext           %10p\n",&etext);//text  -> codigo
	printf("Suma            %10p\n", &Suma);	
	printf("main            %10p\n", &main);
	printf("----------------EDATA/DATA------------------\n");
	printf("edata           %10p\n", &edata);//data -> inicializadas (Globales)
	printf("var2            %10p\n", &var2);//inicializada mas cerca de edata
	printf("----------------------------------\n");
	printf("end             %10p\n", &end);//bss    -> no inicializadas
	printf("var1            %10p\n", &var1);//no inicializada mas cerca de end
	printf("----------------------------------\n");
	
	int aux1 = 1;
	int aux2;
	printf("\n\n----------STACK-------------------\n");
	printf("aux1            %10p\n", &aux1);
	printf("aux2            %10p\n", &aux2);

	printf("\n\n----------HEAP-------------------\n");
	int* p_int;
	p_int = new int;//p_int=malloc(sizeof(int));
	printf("p_int           %10p\n", p_int);


	exit(EXIT_SUCCESS);
}

int Suma(int a, int b)
{
	int result;
	result = a + b;
	return result;

	printf("\t\t\tSuma\n");
	//Estas variables van a parar al stack de memoria (no van a estar cerca del puntero de suma)
	//STACK:
	//En el stack no se diferencia entre variables inicializadas de las no inicializadas
	printf("var a           %10p\n", &a);
	printf("var b           %10p\n", &b);
}