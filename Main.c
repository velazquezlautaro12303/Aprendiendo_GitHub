#include "MyHeader.h"

int main()
{
	int a,b,option,resultado;
	puts("hola");
	puts("Ingrese variable a");
	scanf("%i",%a);
	puts("Ingrese variable b");
	scanf("%i",&b);
	puts("Que operacion desea hacer:");
	puts("1_Sumar");
	puts("2_Restar");
	scanf("%i",&option);
	switch(option)
	{
		case 1:resultado = Suma(a,b);break;
		case 2:resultado = Resta(a,b);break;
		default;break;
	}
	puts("%i+%i=%i",a,b,resultado);
	return 0;
}
