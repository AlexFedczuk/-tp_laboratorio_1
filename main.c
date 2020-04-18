#include <stdio.h>
#include <stdlib.h>
#include "funcionesDelTP.h"
#include "operacionesMatematicas.h"

int main()
{
    int primerOperando;
    int segundoOperando;
    int opcion;
    int banderaCase1;
    int banderaCase2;
    int banderaCase3;
    int bandera1Menu;
    int bandera2Menu;
    int suma;
    int resta;
    float division;
    int multiplicacion;
    int factoreoA;
    int factoreoB;

    banderaCase1=0;
    banderaCase2=0;
    banderaCase3=0;
    bandera1Menu=0;
    bandera2Menu=0;


    do
    {

        if(bandera1Menu==0)
        {
            printf("1. Ingresar 1er operando (A=x)\n");
        }else
        {
            printf("1. Ingresar 1er operando (A=%d)\n",primerOperando);
        }

        if(bandera2Menu==0)
        {
            printf("2. Ingresar 2do operando (B=y)\n");
        }else
        {
            printf("2. Ingresar 2do operando (B=%d)\n",segundoOperando);
        }
                printf("3. Calcular todas las operaciones\n");
                printf("4. Informar resultados\n");
                printf("5. Salir\n");

        opcion=ingresarOpcion(opcion,"\nElija una opcion: ");

        switch(opcion)
        {
            case 1:

                primerOperando=pedidorNumero(primerOperando,"\nIngrese el 1er operando: ");
                banderaCase1++;
                bandera1Menu++;
                break;

            case 2:

                segundoOperando=pedidorNumero(segundoOperando,"\nIngrese el 2do operando: ");
                banderaCase2++;
                bandera2Menu++;
                break;

            case 3:
                if(banderaCase1!=0 && banderaCase2!=0)
                {
                    suma=sumar(primerOperando,segundoOperando);
                    resta=restar(primerOperando,segundoOperando);
                    division=dividir(primerOperando,segundoOperando);
                    multiplicacion=multiplicar(primerOperando,segundoOperando);
                    factoreoA=factorizar(primerOperando);
                    factoreoB=factorizar(segundoOperando);
                    banderaCase3++;
                }else
                {
                    if(banderaCase1==0 && banderaCase2==0)
                    {
                        printf("Error! Debe ingresar los valores de los operando\n.");
                    }else
                    {
                        if(banderaCase1!=0 && banderaCase2==0)
                        {
                            printf("Error Falta ingresarle un valor al 2do operando\n");
                        }else
                        {
                            if(banderaCase1==0 && banderaCase2!=0)
                            {
                                printf("Error Falta ingresar un valor para el 1er operando");
                            }
                        }
                    }

                }
                break;

            case 4:
                if(banderaCase1!=0 && banderaCase2!=0 && banderaCase3!=0)
                {
                    mostarResultadosMK2(primerOperando,segundoOperando,suma,resta,division,multiplicacion,factoreoA,factoreoB);
                    banderaCase3--;
                }else
                {
                    if(banderaCase1==0 && banderaCase2==0 && banderaCase3==0)
                    {
                        printf("Error! Falta ingresar valores para los operando y calcularlos\n");
                    }else
                    {
                        if(banderaCase1!=0 && banderaCase2==0 && banderaCase3==0)
                        {
                            printf("Error Falta ingresarle un valor al 2do operando y calcularlo\n");
                        }else
                        {
                            if(banderaCase1!=0 && banderaCase2!=0 && banderaCase3==0)
                            {
                                printf("Error Falta calcular los operando\n");
                            }else
                            {
                                if(banderaCase1==0 && banderaCase2!=0 && banderaCase3==0)
                                {
                                    printf("Error Falta ingresarle un al valor 1er operando y calcularlos\n");
                                }
                            }
                        }
                    }
                }
                break;

            default:
                printf("\nSaliendo de la calculadora...\n");
                break;
        }
        system("pause");
        system("cls");
    }
    while(opcion!=5);
    return 0;
}




