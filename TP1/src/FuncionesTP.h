/*
 * Funciones.h
 *
 *  Created on: 16 abr. 2021
 *      Author: Marcos
 */
#include <stdio.h>
#ifndef FUNCIONES_H_
#define FUNCIONES_H_
/**
 * @fn float ingresarPrimerNumero()
 * @brief Permite el ingreso del primer número de tipo float.
 *
 * @return Devuelve el número A ingresado.
 */
float ingresarPrimerNumero();
/**
 * @fn float ingresarSegundoNumero()
 * @brief Permite el ingreso del segundo número de tipo float.
 *
 * @return Devuelve el número B ingresado.
 */
float ingresarSegundoNumero();
/**
 * @fn float realizarSuma(float, float)
 * @brief Realiza la operación suma entre A y B.
 *
 * @param A
 * @param B
 * @return	Devuelve el resultado de la suma.
 */
float realizarSuma(float A, float B);
/**
 * @fn float realizarResta(float, float)
 * @brief Realiza la operación resta entre A y B
 *
 * @param A
 * @param B
 * @return Devuelve el resultado obtenido de la resta.
 */
float realizarResta(float A, float B);
/**
 * @fn float realizarDivision(float, float)
 * @brief Realiza la división entre A y B.
 *
 * @param A
 * @param B
 * @return Devuelve el resultado de la división entre A y B.
 */
float realizarDivision(float A, float B);
/**
 * @fn float realizarMultiplicacion(float, float)
 * @brief Realiza la multiplicación entre A y B.
 *
 * @param A
 * @param B
 * @return Retorna el resultado de la multiplicación entre A y B.
 */
float realizarMultiplicacion(float A, float B);
/**
 * @fn float realizarFactorialA(float)
 * @brief Realiza el factorial del número A. En caso de ser negativo muestra un mensaje al usuario
 * en el cual no permite la operación de la misma.Y en caso de ser un número decimal, realiza la
 * operación, solo con la parte entera.
 *
 *
 * @param A
 * @return Retorna el resultado del factorial de A.
 */
float realizarFactorialA(float A);
/**
 * @fn float realizarFactorialB(float)
 * @brief Realiza el factorial del número B.Si el número ingresado es negativo, muestra un mensaje
 * en el cual dice que no se puede realizar la operación. En caso de ser un número decimal,
 * realiza la operación solo con la parte entera del número.
 *
 * @param B
 * @return Devuelve el resultado del factorial de B.
 */
float realizarFactorialB(float B);

#endif /* FUNCIONES_H_ */
