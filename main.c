#include <stdio.h>
#include <stdlib.h>
#include "funcionesDelTP.h"
#include "operacionesMatematicas.h"

void mostarResultadosMK2(int primerOperando,int segundoOperando,int suma,int resta,float division,int multiplicacion,int factoreoA,int factoreoB);

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
    //Nuevas variables
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
                    //realizarOpMat(primerOperando,segundoOperando);
                    suma=sumar(primerOperando,segundoOperando);
                    resta=restar(primerOperando,segundoOperando);
                    division=dividir(primerOperando,segundoOperando);
                    multiplicacion=multiplicar(primerOperando,segundoOperando);
                    factoreoA=factorizar(primerOperando);
                    factoreoB=factorizar(segundoOperando);
                    /*sumar(primerOperando,segundoOperando);
                    restar(primerOperando,segundoOperando);
                    dividir(primerOperando,segundoOperando);
                    multiplicar(primerOperando,segundoOperando);
                    factorizar(primerOperando);
                    factorizar(segundoOperando);*/
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
                    //mostrarResultados(primerOperando,segundoOperando);
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

void mostarResultadosMK2(int primerOperando,int segundoOperando,int suma,int resta,float division,int multiplicacion,int factoreoA,int factoreoB)
{
    /*int suma;
    int resta;
    float division;
    int multiplicacion;
    int factoreoA;
    int factoreoB;*/

    suma=sumar(primerOperando,segundoOperando);
    printf("a) El resultado de %d+%d es: %d\n",primerOperando,segundoOperando,suma);

    resta=restar(primerOperando,segundoOperando);
    printf("b) El resultado de %d-%d es: %d\n",primerOperando,segundoOperando,resta);

    division=dividir(primerOperando,segundoOperando);
    if(segundoOperando==0)
    {
        printf("c) No es posible dividir por cero\n");
    }else
    {
        printf("c) El resultado de %d/%d es: %f\n",primerOperando,segundoOperando,division);
    }

    multiplicacion=multiplicar(primerOperando,segundoOperando);
    printf("d) El resultado de %d*%d es: %d \n",primerOperando,segundoOperando,multiplicacion);

    factoreoA=factorizar(primerOperando);
    factoreoB=factorizar(segundoOperando);
    if(primerOperando<13 && segundoOperando<13)
    {
        printf("e) El factorial de %d es: %d y El factorial de %d es: %d\n",primerOperando,factoreoA,segundoOperando,factoreoB);
    }else
    {
        if(primerOperando>12 && segundoOperando<13)
        {
            printf("e) Esta calculadora no esta preparada para factorear numeros mayores a 12. El factorial de %d es: %d\n",segundoOperando,factoreoB);
        }else
        {
            if(primerOperando<13 && segundoOperando>12)
            {
                printf("e) El factorial de %d es: %d .Esta calculadora no esta preparada para factorear numeros mayores a 12\n",primerOperando,factoreoA);
            }else
            {
                if(primerOperando>12 && segundoOperando>12)
                {
                    printf("e) Esta calculadora no esta preparada para factorear numeros mayores a 12\n");
                }
            }
        }
    }


}//Recien termine de cambiar los operandos...


