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
    int primerOperador;
    int segundoOperador;
    int resultadoSuma;
    int resultadoResta;
    float resultadoDivision;
    int resultadoMultiplicacion;
    int resultadoFactorizadoX;
    int resultadoFactorizadoY;
    int opcion;
    int contador;

    contador=0;

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

                primerOperador=pedidorNumero(primerOperador,"\nIngrese el 1er operando: ");
                break;

            case 2:

                segundoOperador=pedidorNumero(segundoOperador,"\nIngrese el 2do operando: ");
                break;

            case 3:

                realizarOpMat(primerOperador,segundoOperador);
                break;

            case 4:

                mostrarResultados(primerOperador,segundoOperador);
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
}




