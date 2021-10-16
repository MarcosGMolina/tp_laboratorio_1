/*
 ============================================================================
 Name        : TP2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdlib.h>
#include "ArrayEmployees.h"
#include <string.h>

#define Vacio 0
#define Ocupado 1
#define Tamanio 1000

int main(void)
{
	setbuf(stdout,NULL);

	employee misEmpleados[Tamanio];
	employee elEmpleado;
	int opcionIngresada;
	int indiceEncontrado;
	int idEmpleado;
	int id;
	float sueldoEmpleado=0;
	int cargaEmpleado;
	float acumuladorSalario=0;
	int contadorSalario=0;
	int orden;
	int retornoOrden;
	float promedioSalario=0;
	int cantidadSuperarSalario=0;
	int primerPaso=0;

	initEmployees(misEmpleados,Tamanio);


	do
	{
		printf("\n1:Dar de alta un empleado. ");
		printf("\n2:Modificar la información de un empleado. ");
		printf("\n3:Dar de baja un empleado. ");
		printf("\n4:Mostrar la lista de empleados ordenados alfabéticamente por apellido y sector .");
		printf("\n5:Mostrar el total y promedio de los salarios. ");
		printf("\n6:Salir del programa:\n");
		scanf("%d",&opcionIngresada);

		switch(opcionIngresada)
		{
			case 1:

				//calculamos el id
				idEmpleado = devolverIndice(misEmpleados, Tamanio);
				printf("\nIndice: %d",idEmpleado);
				elEmpleado=datosEmpleado();
				cargaEmpleado=addEmployee(misEmpleados,elEmpleado,idEmpleado,Tamanio);


				if(cargaEmpleado==0)
				{
					printf("\nEmpleado dado de alta. \n");
					contadorSalario++;
					acumuladorSalario=sueldoEmpleado + acumuladorSalario;

				}
				else
				{
					printf("\nError al dar de alta el empleado. \n");
				}
				primerPaso=1;


			break;
			case 2:
				if(primerPaso==0)
				{
					printf("\nError,debe realizar el alta de un empleado primero.\n");
				}
				else
				{

					printf("Ingrese el id del empleado a buscar: ");
					scanf("%d",&id);
					indiceEncontrado=findEmployeeById(misEmpleados,Tamanio,id);
					if(indiceEncontrado!=-1)
					{
						printf("Nombre: %s \nApellido: %s  \nSueldo: %.2f  \nSector: %d \n",elEmpleado.nombreEmpleado
						,elEmpleado.apellidoEmpleado,elEmpleado.sueldo,elEmpleado.sector);
						modifyEmployee(misEmpleados,Tamanio,indiceEncontrado);
					}
					else
					{
						printf("\nEl empleado no fue encontrado. \n");
					}
				}
			break;
			case 3:
				if(primerPaso==0)
				{
					printf("\nError, debe realizar el alta de un empleado primero\n");
				}
				else
				{
					printf("Ingrese el id del empleado a buscar: ");
					scanf("%d",&id);

					indiceEncontrado=findEmployeeById(misEmpleados,Tamanio,id);


					if(indiceEncontrado!=-1)
					{
						printf("Nombre: %s Apellido: %s  Sueldo: %.2f  Sector: %d \n",elEmpleado.nombreEmpleado
						,elEmpleado.apellidoEmpleado,elEmpleado.sueldo,elEmpleado.sector);
						contadorSalario--;
						acumuladorSalario=acumuladorSalario-misEmpleados[indiceEncontrado].sueldo;
						removeEmployee(misEmpleados,Tamanio,indiceEncontrado);
					}
					else
					{
						printf("El id del empleado no fue encontrado. \n");
					}
				}


			break;
			case 4:
				if(primerPaso==0)
				{
					printf("\nError, debe realizar el alta de un empleado primero\n");
				}
				printf("Elija el orden del informe: \n0-De manera descendente \n1-De manera ascendente: ");
				scanf("%d",&orden);
				retornoOrden=sortEmployees(misEmpleados,Tamanio,orden);
				if(retornoOrden==0)
				{
					printEmployees(misEmpleados,Tamanio);
				}
				else
				{
					printf("Error, al ordenar. \n");
				}
			break;
			case 5:
				if(contadorSalario>0)
				{
					promedioSalario=acumuladorSalario/contadorSalario;
					printf("\nEl promedio de los salarios es: %.2f \n",promedioSalario);
					printf("\nEl total de los salarios es: %.2f \n",acumuladorSalario);
					cantidadSuperarSalario=superarSalarioPromedio(misEmpleados,Tamanio,promedioSalario);
					printf("\nLa cantidad de empleado con salario mayor al promedio es de : %d \n",cantidadSuperarSalario);

				}
				else
				{
					printf("\nNo hay registro de sueldos de empleado ingresados. \n");
				}
			break;
			case 6:
			printf("\nSalir del programa. ");
			break;
		}

	}while(opcionIngresada!=6);

	return EXIT_SUCCESS;
}
