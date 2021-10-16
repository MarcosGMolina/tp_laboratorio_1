/*
 * ArrayEmployees.c
 *
 *  Created on: 15 may. 2021
 *      Author: Marcos
 */
#include <stdlib.h>
#include "ArrayEmployees.h"
#include <string.h>


int initEmployees(employee lista[],int tam)
{
	int i;
	for(i=0;i<tam;i++)
	{
		lista[i].isEmpty=0;
	}
	return 0;
}

int devolverIndice(employee lista[], int tam)
{
	int i;
	for(i=0;i<tam;i++)
		{
			if(lista[i].isEmpty==0)
			{
				break;
			}
		}
	return i;
}
int addEmployee(employee lista[],employee miEmpleado, int id, int tam)
{
	int i;
	int banderaInfo;
	banderaInfo=-1;
	miEmpleado.id = id;
	miEmpleado.isEmpty=1;
	for(i=0;i<tam;i++)
	{
		if(lista[i].isEmpty==0)
		{
			lista[i]=miEmpleado;
			banderaInfo=0;
			break;
		}
	}
	return banderaInfo;

}
int findEmployeeById(employee lista[],int tam,int id)
{
	int i;
	int empleadoEncontrado;

	empleadoEncontrado=0;

	for(i=0;i<tam;i++)
	{
		if(lista[i].isEmpty==1)
		{
			if(id==lista[i].id)
			{
				printf("Se encontró al empleado. \n");
				empleadoEncontrado=1;
				break;
			}
		}

	}
	if(empleadoEncontrado==1)
	{
		return i;
	}
	else
	{
		return -1;
	}
}
int removeEmployee(employee lista[],int tam,int indice)
{
	int opcionIngresada;

	printf("¿Esta seguro que desea dar de baja al empleado? Presione 1 para confirmar o 2 para cancelar: ");
	scanf("%d",&opcionIngresada);
	if(opcionIngresada==1)
	{
		lista[indice].isEmpty=0;
		printf("Empleado dado de baja \n");
	}
	else
	{
		printf("Operación cancelada. \n");
	}
	return 0;
}
int sortEmployees(employee lista[],int tam,int orden)
{
	int i;
	int j;
	int retorno=-1;
	employee auxApellido;
	employee auxSector;

	for(i=0;i<tam-1;i++)
	{
		for(j=i+1;j<tam;j++)
		{
			if(orden==1)
			{
				if(strcmp(lista[i].apellidoEmpleado, lista[j].apellidoEmpleado)>0)
				{
					 auxApellido = lista[i];
					 lista[i] = lista[j];
					 lista[j] = auxApellido;
				}
				else
				{
					if(strcmp(lista[i].apellidoEmpleado, lista[j].apellidoEmpleado)==0)
					{
						if(lista[i].sector>lista[j].sector)
						{
							auxSector=lista[i];
							lista[i]=lista[j];
							lista[j]=auxSector;
						}
					}
				}
			}
			else
			{
				if(strcmp(lista[j].apellidoEmpleado, lista[i].apellidoEmpleado)>0)
				{
					auxApellido = lista[j];
					lista[j] = lista[i];
					lista[i] = auxApellido;
				}
				else
				{
					if(strcmp(lista[j].apellidoEmpleado, lista[i].apellidoEmpleado)==0)
					{
						if(lista[j].sector>lista[i].sector)
						{
							auxSector=lista[j];
							lista[j]=lista[i];
							lista[i]=auxSector;
						}
					}
				}
			}
		}


	}
	retorno=0;

	return retorno;
}
int printEmployees(employee lista[],int tam)
{
	int i;
	for(i=0;i<tam;i++)
	{
		if(lista[i].isEmpty!=0)
		{
			printf("%d  %s  %s  %.2f  %d ",	lista[i].id,
													lista[i].nombreEmpleado,
													lista[i].apellidoEmpleado,
													lista[i].sueldo,
													lista[i].sector);
			printf("\n ");
		}
	}

	return 0;
}
int superarSalarioPromedio(employee lista[],int tam, float promedio)
{
	int i;
	int contadorSuperarSalarios;
	contadorSuperarSalarios=0;

	for(i=0;i<tam;i++)
	{
		if(lista[i].isEmpty!=0)
		{
			if(lista[i].sueldo>promedio)
			{
				contadorSuperarSalarios++;
			}
		}
	}

	return contadorSuperarSalarios;
}
employee datosEmpleado()
{
	employee miEmpleado;
	int validacionNombre=0;
	int validacionApellido=0;

	//Validacion Nombre
	printf("\nIngrese el nombre del empleado: ");
	fflush(stdin);
	gets(miEmpleado.nombreEmpleado);
	validacionNombre=esSoloLetras(miEmpleado.nombreEmpleado);
	while(validacionNombre!=0)
	{
		printf("Error, reintente el ingreso del nombre: ");
		gets(miEmpleado.nombreEmpleado);
		validacionNombre=esSoloLetras(miEmpleado.nombreEmpleado);
	}
	fflush(stdin);

	//Validacion Apellido
	printf("Ingrese el apellido del empleado: ");
	gets(miEmpleado.apellidoEmpleado);
	validacionApellido=esSoloLetras(miEmpleado.apellidoEmpleado);
	while(validacionApellido!=0)
	{
		printf("Error, reintente el ingreso del apellido: ");
		gets(miEmpleado.apellidoEmpleado);
		validacionApellido=esSoloLetras(miEmpleado.apellidoEmpleado);
	}
	fflush(stdin);

	//Validacion Sueldo
	printf("Ingrese el sueldo del empleado: ");
	scanf("%f",&miEmpleado.sueldo);
	while(miEmpleado.sueldo<0 || miEmpleado.sueldo>1000000 )
	{
		printf("Error, numero incorrecto, ingrese nuevamente: ");
		scanf("%f",&miEmpleado.sueldo);
	}



	//Validacion Sector
	printf("Ingrese el sector del empleado: ");
	scanf("%d",&miEmpleado.sector);
	while(miEmpleado.sector<1 || miEmpleado.sector>3)
	{
		printf("Error, reintente el ingreso del sector: ");
		scanf("%d",&miEmpleado.sector);

	}

	return miEmpleado;
}
int modifyEmployee(employee listaEmpleados[],int tam,int iEmpleado)
{
	int opcion;
	int acumuladorSalario=0;
	int validacionNombre;
	int validacionApellido;
	printf("\nIngrese la opción que va a modificar: \n1-Nombre \n2-Apellido \n3-Sueldo \n4-Sector \n5-Dejar de modificar: ");
	scanf("%d",&opcion);

		switch(opcion)
		{
			case 1:
			printf("\nIngrese el nuevo nombre del empleado: ");
			fflush(stdin);
			gets(listaEmpleados[iEmpleado].nombreEmpleado);
			validacionNombre=esSoloLetras(listaEmpleados[iEmpleado].nombreEmpleado);
				while(validacionNombre!=0)
				{
					printf("Error, reintente el ingreso del nombre: ");
					gets(listaEmpleados[iEmpleado].nombreEmpleado);
					validacionNombre=esSoloLetras(listaEmpleados[iEmpleado].nombreEmpleado);
				}
			break;
			case 2:
			printf("\nIngrese el  nuevo apellido del empleado: ");
			fflush(stdin);
			gets(listaEmpleados[iEmpleado].apellidoEmpleado);
			while(validacionApellido!=0)
				{
					printf("Error, reintente el ingreso del apellido: ");
					gets(listaEmpleados[iEmpleado].apellidoEmpleado);
					validacionApellido=esSoloLetras(listaEmpleados[iEmpleado].apellidoEmpleado);
				}
			break;
			case 3:
			acumuladorSalario=acumuladorSalario-listaEmpleados[iEmpleado].sueldo;
			printf("\nIngrese el nuevo sueldo del empleado: ");
			scanf("%f",	&listaEmpleados[iEmpleado].sueldo);
			while(listaEmpleados[iEmpleado].sueldo<0 || listaEmpleados[iEmpleado].sueldo>1000000 )
				{
					printf("Error, numero incorrecto, ingrese nuevamente: ");
					scanf("%f",&listaEmpleados[iEmpleado].sueldo);
				}
			acumuladorSalario=acumuladorSalario+listaEmpleados[iEmpleado].sueldo;
			break;
			case 4:
			printf("\nIngrese el nuevo sector del empleado: ");
			scanf("%d", &listaEmpleados[iEmpleado].sector);
			while(listaEmpleados[iEmpleado].sector<1 || listaEmpleados[iEmpleado].sector>3)
				{
					printf("Error, reintente el ingreso del sector: ");
					scanf("%d",&listaEmpleados[iEmpleado].sector);

				}
			break;
			case 5:
			printf("\nSe eligió la opción dejar de modificar. ");
		}

	printf("\nModificación realizada con éxito. \n");
	return 0;

}
int BuscarLibre(employee lista[], int tam)
{
    int i;
    int indice = -1;
    for(i=0; i<tam; i++)
    {
        if(lista[i].isEmpty==0)
        {
        	indice = i;
            break;
        }
    }
    return indice;
}
int ocuparEspacioLibre(employee lista[], int tam)
{
	int i;
	i=BuscarLibre(lista,tam);
	if(i!=-1)
	{
		lista[i]= datosEmpleado();
		lista[i].isEmpty=1;
	}
	return i;
}

