//importar librerias
#include <stdlib.h>
#include <stdio.h>
#include "test.h"

int main()
{    /*printf("DELL\n");
	return 0;*/
	int var1 = 1;//declare var1  y vale 1
	int var2 = 2;//declare var2  y vale 2
	int suma, resta;//
	suma =  sumar(var1, var2);
	
	resta = restar(var1, var2);
	//imprimi
	printf("la suma es %d y la resta es %d\n", suma, resta);
	return 0;
}
