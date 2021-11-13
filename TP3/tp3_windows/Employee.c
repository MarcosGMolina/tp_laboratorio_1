#include <string.h>
#include "Employee.h"
Employee* employee_new()
{
	Employee* pEmployee;
	pEmployee=(Employee*)malloc(sizeof(Employee));
	return pEmployee;
}
int employee_setId(Employee* myEmployees,int* id)
{
	myEmployees->id=id;

	return 0;
}
int employee_setNombre(Employee* myEmployees,char* nombre)
{
	myEmployees->nombre=nombre;
	return 0;
}
int employee_setHorasTrabajadas(Employee* myEmployees,int horasTrabajadas)
{
	myEmployees->horasTrabajadas=horasTrabajadas;
	return 0;
}
int employee_setSueldo(Employee* myEmployees,int sueldo)
{

	myEmployees->sueldo=sueldo;

	return 0;
}
int employee_getId(Employee* this,int* id)
{
	return this->id;
}
int employee_getNombre(Employee* this,char* nombre)
{
	return this->nombre;
}
int employee_getHorasTrabajadas(Employee* this,int* horasTrabajadas)
{
	return this->horasTrabajadas;
}
int employee_getSueldo(Employee* this,int* sueldo)
{
	return this->sueldo;
}
int employee_NameComparation(void* unEmpleado,void* otroEmpleado)
{
	int ordenamiento;
	Employee* primerEmpleado;
	Employee* segundoEmpleado;

	primerEmpleado=unEmpleado;
	segundoEmpleado=otroEmpleado;

	ordenamiento=strcmp(primerEmpleado->nombre,segundoEmpleado->nombre);
	return ordenamiento;

}
int employee_IdComparation(void* unEmpleado,void* otroEmpleado)
{
	int ordenamiento=0;
	Employee* primerEmpleado;
	Employee* segundoEmpleado;

	primerEmpleado=unEmpleado;
	segundoEmpleado=otroEmpleado;

	if(primerEmpleado->id>segundoEmpleado->id)
	{
		ordenamiento=1;
	}
	else
	{
		if(primerEmpleado->id<segundoEmpleado->id)
		{
			ordenamiento=-1;
		}
	}
	return ordenamiento;
}
int employee_HoursComparation(void* unEmpleado,void* otroEmpleado)
{
	int ordenamiento=0;
	Employee* primerEmpleado;
	Employee* segundoEmpleado;

	primerEmpleado=unEmpleado;
	segundoEmpleado=otroEmpleado;

	if(primerEmpleado->horasTrabajadas>segundoEmpleado->horasTrabajadas)
	{
		ordenamiento=1;
	}
	else
	{
		if(primerEmpleado->horasTrabajadas<segundoEmpleado->horasTrabajadas)
		{
			ordenamiento=-1;
		}
	}
	return ordenamiento;
}
int employee_SalaryComparation(void* unEmpleado,void* otroEmpleado)
{
	int ordenamiento=0;
	Employee* primerEmpleado;
	Employee* segundoEmpleado;

	primerEmpleado=unEmpleado;
	segundoEmpleado=otroEmpleado;

	if(primerEmpleado->sueldo>segundoEmpleado->sueldo)
	{
		ordenamiento=1;
	}
	else
	{
		if(primerEmpleado->sueldo<segundoEmpleado->sueldo)
		{
			ordenamiento=-1;
		}
	}
	return ordenamiento;
}
