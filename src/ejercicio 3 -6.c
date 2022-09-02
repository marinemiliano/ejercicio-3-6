/*
 ============================================================================
 Name        : ejercicio.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style

 Ejercicio 3-6: Realizar un programa que: asigne a la variable numero1 un valor
solicitado al usuario, valide el mismo entre 10 y 100, realice un descuento del 5% a
dicho valor a través de una función llamada realizarDescuento(). Mostrar el resultado
por pantalla.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

float realizarDecuento(int numero,float descuento);

int main(void)
{
	setbuf(stdout,NULL);
	int numero1;
	float resultado;

	printf("ingrese numero");
	scanf("%d",&numero1);

	while(numero1<10 || numero1>100)
	{
		printf("error, reingrese numero");
		scanf("%d",&numero1);
	}

	resultado=realizarDecuento(numero1,0.95);
	printf("se aplico el descuento del 5 porciento resultado final: %.2f",resultado);

	return 0;
}

float realizarDecuento(int numero1,float descuento)
{
	float resultado;

		resultado=numero1*descuento;

	return resultado;
}
