/*
 * ArrayEmployees.h
 *
 *  Created on: 15 may. 2021
 *      Author: Marcos
 */
#include <stdio.h>

#ifndef ARRAYEMPLOYEES_H_
#define ARRAYEMPLOYEES_H_

#define Tamanio 1000

typedef struct
{
	int id;
	char nombreEmpleado[51];
	char apellidoEmpleado[51];
	float sueldo;
	int sector;
	int isEmpty;
}employee;
/**
 * @fn int initEmployees(employee[], int)
 * @brief inicializa la estructura de employees en Vacio.
 *
 * @param listado
 * @param id tamaño
 * @return 0 en caso que haya salido bien
 */

int initEmployees(employee listado[],int);
/**
 * @fn int addEmployee(employee[], int, int, char[], char[], float, int)
 * @brief carga los datos del empleado a dar el alta
 *
 * @param listado
 * @param tamañano en int
 * @param id del empleado en int
 * @param nombre del empleado en cadena de char
 * @param apellido del empleado en cadena de char
 * @param sueldo del empleado en float
 * @param sector del empleado en int
 * @return banderaInfo, que informa si logró dar el alta o no.
 */
int addEmployee(employee listado[],employee miEmpleado,int,int);
/**
 * @fn int findEmployeeById(employee[], int, int)
 * @brief Encuenta un empleado mediante su id
 *
 * @param listado
 * @param tamañano de la lista
 * @param id
 * @return el índice del empleado encontrado o -1 en caso de no encontrarlo
 */
int findEmployeeById(employee listado[],int,int);
/**
 * @fn int removeEmployee(employee[], int, int)
 * @brief Elimina el empleado de manera logica
 *
 * @param listado
 * @param tamañano de la lista
 * @param indice del empleado que se quiere remover
 * @return 0
 */
int removeEmployee(employee listado[],int,int);
/**
 * @fn int sortEmployees(employee[], int, int)
 * @brief Ordena a los empleados dados de alta.
 *
 * @param listado
 * @param tamaño
 * @param orden
 * @return retorno
 */
int sortEmployees(employee listado[],int,int);
/**
 * @fn int printEmployees(employee[], int)
 * @brief Muestra los empleados
 *
 * @param listado
 * @param tamañano de la lista
 * @return 0
 */
int printEmployees(employee listado[],int);
/**
 * @fn int superarSalarioPromedio(employee[], int, float)
 * @brief Compara los salarios para contar cuantos superan el salario promedio
 *
 * @param listado
 * @param tamañano de la lista
 * @param el promedio del salario de los empleados
 * @return el contador de empleados(contadorSuperarSalarios).
 */
int superarSalarioPromedio(employee listado[],int,float);

/**
 * @fn employee datosEmpleado()
 * @brief Valida y realiza la carga de datos a una variable de tipo struct
 * @return la variable struct miEmpleado
 */
employee datosEmpleado();
/**
 * @fn int modifyEmployee(employee listaEmpleados[],int,int)
 * @brief muestra las opciones que son posibles modificar y en caso de que el usuario quiera
 * deja modificarlas
 * @param listado
 * @param tamañano de la lista
 * @param indice del empleado que se va a modificar
 * @return 0
 */
int modifyEmployee(employee listaEmpleados[],int,int);

/**
 *@fn devolverIndice(employee lista[],int);
 *@brief devuelve el primer indice vacio que encuentra
 *@param listado
 *@param tamaño del listado
 *@return el indice
 *
 */
int devolverIndice(employee lista[],int);

/**
 * @brief Verifica si el valor recibido contiene solo letras
 * @param str Array con la cadena a ser analizada
 * @return 1 si contiene solo ' ' y letras y 0 si no lo es
 */
int esSoloLetras(char str[]);


#endif /* ARRAYEMPLOYEES_H_ */
