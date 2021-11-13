#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"
#include "Employee.h"

/** \brief Parsea los datos los datos de los empleados desde el archivo data.csv (modo texto).
 *
 * \param path char*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */
int parser_EmployeeFromText(FILE* pFile , LinkedList* pArrayListEmployee)
{
	int r;
	int i=0;
	char id[20];
	char nombre[128];
	char horasTrabajadas[20];
	char sueldo[20];
	pFile=fopen("data.csv","r");
	if(pFile==NULL)
	{
		printf("No se pudo abrir el archivo. ");
	}
	do
	{
		r=fscanf(pFile,"%[^,],%[^,],%[^,],%[^,]",id,nombre,horasTrabajadas,sueldo);
		if(r==4)
		{
			Employee* pMiEmpleado=employee_new();
			employee_setNombre(pMiEmpleado,nombre);
			employee_setHorasTrabajadas(pMiEmpleado,atoi(horasTrabajadas));
			employee_setSueldo(pMiEmpleado,atoi(sueldo));
		}
		else
		break;
	}
	while(!feof(pFile));
	if((fclose(pFile))==-1)
	{
		printf("ERROR al cerrar el archivo. ");
	}
	else
	{
		printf("Archivo cerrado.");
	}
    return 1;
}

/** \brief Parsea los datos los datos de los empleados desde el archivo data.csv (modo binario).
 *
 * \param path char*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */
int parser_EmployeeFromBinary(FILE* pFile , LinkedList* pArrayListEmployee)
{
	int r=0;;
	int i=0;
	char id[20];
	char nombre[128];
	char horasTrabajadas[20];
	char sueldo[20];
	pFile=fopen("data.csv","rb");
	if(pFile==NULL)
	{
		printf("No se pudo abrir el archivo. ");
	}
	do
	{
		r=fscanf(pFile,"%[^,],%[^,],%[^,],%[^,]",id,nombre,horasTrabajadas,sueldo);
		if(r==4)
		{
			Employee* pMiEmpleado=employee_new();
			employee_setNombre(pMiEmpleado,nombre);
			employee_setHorasTrabajadas(pMiEmpleado,atoi(horasTrabajadas));
			employee_setSueldo(pMiEmpleado,atoi(sueldo));
		}
		else
		break;
	}
	while(!feof(pFile));
	if((fclose(pFile))==-1)
	{
		printf("ERROR al cerrar el archivo. ");
	}
	else
	{
		printf("Archivo cerrado.");
	}
    return 1;
}
