#include <stdio.h>
#include <stdlib.h>
#include "calculadora.h"

int main()
{
    float resultado;
    float numero1,numero2 = 0;

    int opcion=0;

    while(opcion != 9)
    {


        printf("1- Ingresar primer numero (%.2f)\n", numero1);
        printf("2- Ingresar segundo numero (%.2f)\n", numero2);
        printf("3- calcular suma\n");
        printf("4- calcular resta\n");
        printf("5- calcular division\n");
        printf("6- calcular multiplicacion\n");
        printf("7- calcular factorial de un numero \n");
        printf("8- Calcular todas las operaciones\n");
        printf("9- Salir\n");


        scanf("%d",&opcion);
                 system("cls");

        switch(opcion)
        {

            case 1:
                printf("ingrese el primer numero:");
                scanf("%f", &numero1);
                break;
            case 2:
                printf("ingrese el segundo numero:");
                scanf("%f", &numero2);
                break;
            case 3:
                resultado = suma(numero1, numero2);

                break;

            case 4:
                   resultado =resta(numero1, numero2);
               break;

            case 5:

                      resultado = division(numero1, numero2);
              break;

            case 6:
                resultado = multiplicacion(numero1, numero2);

                break;

            case 7:
                    resultado = factorial(numero1);

               break;
            case 8:
                        resultado = suma(numero1, numero2);


                         resultado = resta(numero1, numero2);

                         resultado = division (numero1, numero2);

                         resultado = multiplicacion(numero1,numero2);

                         resultado = factorial(numero1);

                break;

           case 9:
                        opcion = 9;

                        printf("proseso finalizado");
                break;
        }




    }
    return 0;

}
