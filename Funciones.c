#include <stdio.h>
#include <stdlib.h>
#include "Funciones.h"

/** \brief Pide un numero al usuario.
 * \return Retorna el numero ingresado por el usuario.
 *
 */
float pedirNumero()
{
    float numero;
    printf("Ingrese Numero: ");
    scanf("%f",&numero);
    return numero;
}

/** \brief Realiza la operacion suma.
 * \param primerOperando Primer numero a sumar.
 * \param segundoOperando Segundo numero a sumar
 * \return Resultado de la suma.
 *
 */
float sumar(float primerOperando,float segundoOperando)
{
    float resultado;
    resultado=primerOperando+segundoOperando;
    return resultado;
}

/** \brief Realiza la operacion resta.
 * \param primerOperando Primer numero a restar.
 * \param segundoOperando Segundo numero a restar.
 * \return Resultado de la resta.
 *
 */
float restar(float primerOperando,float segundoOperando)
{
    float resultado;
    resultado=primerOperando-segundoOperando;
    return resultado;
}

/** \brief Realiza la operacion dividir.
 * \param primerOperando Primer numero a dividir.
 * \param segundoOperando Segundo numero a dividir.
 * \return Resultado de la division.
 *
 */
float dividir(float primerOperando,float segundoOperando)
{
    float resultado;
    resultado=primerOperando/segundoOperando;
    return resultado;
}

/** \brief Realiza la operacion multiplicar.
 * \param primerOperando Primer numero a multiplicar.
 * \param segundoOperando Segundo numero a multiplicar.
 * \return Resultado de la multiplicacion.
 *
 */
float multiplicar(float primerOperando,float segundoOperando)
{
    float resultado;
    resultado=primerOperando*segundoOperando;
    return resultado;
}

/** \brief Realiza el factorial.
 * \param operando Numero con el cual se realiza el factorial.
 * \return Resultado del factorial.
 *
 */
float factorial(float operando)
{
    int i;
    float factorial=1;
    for(i=1;i<=operando;i++)
    {
        factorial = factorial *i;
    }
    return factorial;
}
