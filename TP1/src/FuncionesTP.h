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
 * @brief Permite el ingreso del primer n�mero de tipo float.
 *
 * @return Devuelve el n�mero A ingresado.
 */
float ingresarPrimerNumero();
/**
 * @fn float ingresarSegundoNumero()
 * @brief Permite el ingreso del segundo n�mero de tipo float.
 *
 * @return Devuelve el n�mero B ingresado.
 */
float ingresarSegundoNumero();
/**
 * @fn float realizarSuma(float, float)
 * @brief Realiza la operaci�n suma entre A y B.
 *
 * @param A
 * @param B
 * @return	Devuelve el resultado de la suma.
 */
float realizarSuma(float A, float B);
/**
 * @fn float realizarResta(float, float)
 * @brief Realiza la operaci�n resta entre A y B
 *
 * @param A
 * @param B
 * @return Devuelve el resultado obtenido de la resta.
 */
float realizarResta(float A, float B);
/**
 * @fn float realizarDivision(float, float)
 * @brief Realiza la divisi�n entre A y B.
 *
 * @param A
 * @param B
 * @return Devuelve el resultado de la divisi�n entre A y B.
 */
float realizarDivision(float A, float B);
/**
 * @fn float realizarMultiplicacion(float, float)
 * @brief Realiza la multiplicaci�n entre A y B.
 *
 * @param A
 * @param B
 * @return Retorna el resultado de la multiplicaci�n entre A y B.
 */
float realizarMultiplicacion(float A, float B);
/**
 * @fn float realizarFactorialA(float)
 * @brief Realiza el factorial del n�mero A. En caso de ser negativo muestra un mensaje al usuario
 * en el cual no permite la operaci�n de la misma.Y en caso de ser un n�mero decimal, realiza la
 * operaci�n, solo con la parte entera.
 *
 *
 * @param A
 * @return Retorna el resultado del factorial de A.
 */
float realizarFactorialA(float A);
/**
 * @fn float realizarFactorialB(float)
 * @brief Realiza el factorial del n�mero B.Si el n�mero ingresado es negativo, muestra un mensaje
 * en el cual dice que no se puede realizar la operaci�n. En caso de ser un n�mero decimal,
 * realiza la operaci�n solo con la parte entera del n�mero.
 *
 * @param B
 * @return Devuelve el resultado del factorial de B.
 */
float realizarFactorialB(float B);

#endif /* FUNCIONES_H_ */
