#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>

uint16_t Cuenta_Accesos(void);
//int contador;
int main()
{
	//contador = 0;
	printf("Cuenta_Accesos        %d\n", Cuenta_Accesos());
	printf("Cuenta_Accesos        %d\n", Cuenta_Accesos());
	printf("Cuenta_Accesos        %d\n", Cuenta_Accesos());
	//contador++;->main no puede acceder
}
uint16_t Cuenta_Accesos(void)
{
	static int16_t contador = 0;
	contador++;
	printf("contador:            %d\n", contador);
	return contador;
}