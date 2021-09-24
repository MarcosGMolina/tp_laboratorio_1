/*
 * Cálculos.c
 *
 *
 *      Author: Marcos Molina
 */
#include "FuncionesTP.h"
//PRIMER NUMERO
float ingresarPrimerNumero()
{
	float numeroAIngresado;

	printf("\nIngrese el primer número: ");

	scanf("%f", &numeroAIngresado);
	return numeroAIngresado;
}
//SEGUNDO NUMERO
float ingresarSegundoNumero()
{
	float numeroBIngresado;

	printf("\nIngrese el segundo número: ");
	scanf("%f", &numeroBIngresado);
	return numeroBIngresado;
}
//SUMA
float realizarSuma(float X, float Y)
{
	float resultadoSuma;

	resultadoSuma=(X+Y);

	return resultadoSuma;
}
//RESTA
float realizarResta(float X, float Y)
{
	float resultadoResta;

	resultadoResta=(X-Y);

	return resultadoResta;
}
//DIVISION
float realizarDivision(float X, float Y)
{
	float resultadoDivision;
	resultadoDivision=0;

	if(Y==0)
	{
		resultadoDivision=0;
	}
	else
	{
		resultadoDivision=(X/Y);
	}
	return resultadoDivision;
}
//MULTIPLICACION
float realizarMultiplicacion(float X, float Y)
{
	float resultadoMultiplicacion;

	resultadoMultiplicacion=(X*Y);

	return resultadoMultiplicacion;
}
//FACTORIAL A
float realizarFactorialA(float X)
{
	int resultadoFactorialX;
	int i;

	resultadoFactorialX=1;
		if(X==0)
		{
			resultadoFactorialX=1;
		}
		else
		{
			for(i=X;i>1;i--)
				{
					resultadoFactorialX=resultadoFactorialX*i;
				}
		}


	return resultadoFactorialX;
}
//FACTORIAL B
float realizarFactorialB(float Y)
{
	int resultadoFactorialY;
	int i;

	resultadoFactorialY=1;

	if(Y==0)
	{
		resultadoFactorialY=1;
	}
	else
	{
		for(i=Y;i>1;i--)
		{
			resultadoFactorialY=resultadoFactorialY*i;
		}
	}

	return resultadoFactorialY;
}

