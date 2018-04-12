
#include"calculadora.h"


/** \brief Solicita al usuario 2 numeros y los sumara.
 *
 * \param X sera el primer valor.
 * \param Y sera el segundo valor.
 * \return regresara el resultado de la suma.
 *
 */



float suma(float x, float y)
{
 float respuesta;

 respuesta= x+y;
 printf("\nla suma entre %.2f y %.2f es: %.2f \n",x,y, respuesta);
 return respuesta;

}

/** \brief
 * Solicita al usuario 2 numeros y los restara .
 * \param  X sera el primer valor.
 * \param  y sera el segundo valor.
 * \return regresa el resultado de la resta.
 *
 */

float resta(float x, float y)
{
 float respuesta;

 respuesta= x-y;
 printf("\nla resta entre %.2f y %.2f es: %.2f \n", x, y, respuesta);
 return respuesta;
}

/** \brief
 *  Solicita al usuario 2 numeros y los dividira.
 * \param  X sera el numerador.
 * \param  y sera el denominador.
 * \return regresara el resultado de la division.
 *
 */


float division(float x, float y)
{
    float respuesta;

  do{
    if(y==0)
        {

            printf("error en la division  el segundo numero debe ser diferente de 0 : ");
            scanf("%f", &y);
        }

    }while(y==0);

     respuesta= x/y;
     printf("\nla division entre %.2f y %.2f es: %.2f \n", x, y, respuesta);

 return respuesta;
}

/** \brief
 *  Solicita al usuario 2 numeros y los multiplicara.
 * \param X sera el primer valor.
 * \param y sera el segundo valor.
 * \return regresara el resultado de la multiplicacion.
 *
 */

float multiplicacion(float x, float y)
{
 float respuesta;

 respuesta= x*y;

 printf("\nla multiplicacion  entre %2.f y %.2f es: %.2f\n",x,y, respuesta);
 return respuesta;
}

/** \brief Se encargara de realizar la operacion de Factorial.
 *
 * \param sera el valor a factorizar.
 *
 * \return regresara el resultado de la operacion.
 *
 */


int factorial(int x)
{
  int respuesta =1;
 int i;

 for(i=1; i<=x; i=i+1)

 respuesta = respuesta * i;
 printf("\nel Factorial de %2.d es: %.2d \n",x, respuesta);

 return respuesta;
}
