#include <stdlib.h>
#include <stdio.h>

typedef struct Estructura_datos
{
	char dato1;
	char dato2;
	char dato3;
	char dato4;
	char dato5;
}colaDatos_t;

void Ingresar();
void Mostrar();

int main()
{

}
void Ingresar()
{
	static colaDatos_t Cola;
	
	printf("Ingrese datos: \n");
	printf("DATO 1: \n");
	scanf("%c", &Cola.dato1);
	printf("DATO 2: \n");
	scanf("%c", &Cola.dato2);
	printf("DATO 3: \n");
	scanf("%c", &Cola.dato3);
	printf("DATO 4: \n");
	scanf("%c", &Cola.dato4);
	printf("DATO 5: \n");
	scanf("%c", &Cola.dato5);
}
void Mostrar()
{
	printf("DATO 1: %c",'h');
}

