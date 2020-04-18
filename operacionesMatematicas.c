#include "operacionesMatematicas.h"

/** \brief Pedir dos numeros int y sumarlos.
 *
 * \param Pide un int.
 * \param Pide un int.
 * \return Devuelve un int que sera el resultado de la suma.
 *
 */
int sumar(int x,int y)
{
    int resultado;

    resultado=x+y;

    return resultado;
}

/** \brief Pedir dos numeros int y restarlos.
 *
 * \param El numero int por restar.
 * \param El numero int que restara.
 * \return Devuelve un int que sera el resultado de la resta.
 *
 */
int restar(int x,int y)
{
    int resultado;

    resultado=x-y;

    return resultado;
}

/** \brief Pedir dos numeros int y dividirlos.
 *
 * \param El numero int dividendo.
 * \param El numero int divisor.
 * \return Devuelve un numero que sera el resultado de la division.
 *
 */
float dividir(int x,int y)
{
    float resultado;

    resultado=(float)x/y;

    return resultado;
}

/** \brief Pedir dos numeros int y multiplicarlos.
 *
 * \param El primer numero int factor.
 * \param El segundo numero int factor.
 * \return El producto de la multiplicacion.
 *
 */
int multiplicar(int x,int y)
{
    int resultado;

    resultado=x*y;

    return resultado;
}

/** \brief Pedir un numero int y factorizarlo.
 *
 * \param El numero int por factorizar.
 * \return El resultado de la factorizacion.
 *
 */
int factorizar(int operando)
{
    unsigned int resultado;

    if(operando== 0)
    {
        resultado = 1;
    }else{
        resultado=operando*factorizar(operando-1);
    }
    return resultado;
}

/** \brief Calcualr las operaciones matematicas de la calculadora.
 *
 * \param Primer operando de la calculadora.
 * \param Segundo operando de la calculadora.
 * \return Nada.
 *
 */
void realizarOpMat(int x,int y)
{
    sumar(x,y);
    restar(x,y);
    dividir(x,y);
    multiplicar(x,y);
    factorizar(x);
    factorizar(y);
}

/** \brief Calcular y mostrar los resultados de las operaciones matematicas.
 *
 * \param primer operando de la calculadora.
 * \param segundo operando de la calculadora.
 * \return Nada.
 *
 */
void mostarResultadosMK2(int primerOperando,int segundoOperando,int suma,int resta,float division,int multiplicacion,int factoreoA,int factoreoB)
{
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


}
