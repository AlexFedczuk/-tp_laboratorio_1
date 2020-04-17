#include <stdio.h>
#include <stdlib.h>
#include "funcionesDelTP.h"

int main()
{
   /* int primerNum=2;
    int segundoNum=6;
    float resultado;

    resultado=dividir(primerNum,segundoNum);

    printf("%f",resultado);*/
    int primerOperando;
    int segundoOperando;
    int opcion;
    int banderaCase1;
    int banderaCase2;
    int banderaCase3;

    banderaCase1=0;
    banderaCase2=0;
    banderaCase3=0;

    do
    {
        printf("1. Ingresar 1er operando (A=x)\n");
        printf("2. Ingresar 2do operando (B=y)\n");
        printf("3. Calcular todas las operaciones\n");
            printf("\ta) Calcular la suma (A+B)\n");
            printf("\tb) Calcular la resta (A-B)\n");
            printf("\tc) Calcular la division (A/B)\n");
            printf("\td) Calcular la multiplicacion (A*B)\n");
            printf("\te) Calcular el factorial (A!)\n");
        printf("4. Informar resultados\n");
            printf("\ta) El resultado de A+B es: r\n");
            printf("\tb) El resultado de A-B es: r\n");
            printf("\tc) El resultado de A/B es: r o No es posible dividir por cero\n");
            printf("\td) El resultado de A*B es: r \n");
            printf("\te) El factorial de A es: r1 y El factorial de B es: r2\n");
        printf("5. Salir\n");

        opcion=ingresarOpcion(opcion,"Elija una opcion: ");

        switch(opcion)
        {
            case 1:

                primerOperando=pedidorNumero(primerOperando,"\nIngrese el 1er operando: ");
                banderaCase1++;
                break;

            case 2:

                segundoOperando=pedidorNumero(segundoOperando,"\nIngrese el 2do operando: ");
                banderaCase2++;
                break;

            case 3:
                if(banderaCase1!=0 && banderaCase2!=0)
                {
                    realizarOpMat(primerOperando,segundoOperando);
                    banderaCase1--;
                    banderaCase2--;
                    banderaCase3++;
                }else
                {
                    printf("Error, debe ingresar un valor para cada operando!\t");
                }
                break;

            case 4:
                if(banderaCase3!=0)
                {
                    mostrarResultados(primerOperando,segundoOperando);
                    banderaCase3--;
                }else
                {
                    printf("Error, debe ingresar un valor para cada operando y calcularlos!\t");
                }
                break;

            default:
                printf("\n salir \n");
                break;
        }
        system("pause");
        system("cls");
    }
    while(opcion!=5);
    return 0;
}//Ahora en lo que estoy trabajando es en que se deban seguir los pasos a seguir del Menu!




