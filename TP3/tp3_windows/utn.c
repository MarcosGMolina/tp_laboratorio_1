/*
 * utn.c
 *
 *  Created on: 10 jun. 2021
 *      Author: Marcos
 */
#include <string.h>
int utn_getNumero(int* pResultado,char* mensaje, char*mensajeError,int minimo,int maximo,int reintentos)
{
	int retorno=-1;
	int bufferInt;
	if(pResultado != NULL && mensaje != NULL && mensajeError != NULL && minimo<=maximo && reintentos >=0)
	{
		printf("%s",mensaje);
		scanf("%d", &bufferInt);
		if(bufferInt >= minimo && bufferInt<= maximo)
		{
			*pResultado= bufferInt;
			retorno=0;
		}
		else
		{
			printf("%s", mensajeError);
		}
	}
	return retorno;
}

