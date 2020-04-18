#include "funcionesDelTP.h"

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
int factorizar(int variable)
{
    int i;
    int fact;

    i=1;
    fact=1;

     for(i;i<=variable;i++)
     {
         fact=fact*i;
     }

     return fact;
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
    int resultadoSuma;
    int resultadoResta;
    float resultadoDivision;
    int resultadoMultiplicacion;
    int resultadoFactorizadoX;
    int resultadoFactorizadoY;

    resultadoSuma=sumar(x,y);

    resultadoResta=restar(x,y);

    resultadoDivision=dividir(x,y);

    resultadoMultiplicacion=multiplicar(x,y);

    resultadoFactorizadoX=factorizar(x);

    resultadoFactorizadoY=factorizar(y);
}

/** \brief Calcular y mostrar los resultados de las operaciones matematicas.
 *
 * \param primer operando de la calculadora.
 * \param segundo operando de la calculadora.
 * \return Nada.
 *
 */
void mostrarResultados(int x,int y)
{
    int resultadoSuma;
    int resultadoResta;
    float resultadoDivision;
    int resultadoMultiplicacion;
    int resultadoFactorizadoX;
    int resultadoFactorizadoY;

    resultadoSuma=sumar(x,y);
    printf("a) El resultado de %d+%d es: %d\n",x,y,resultadoSuma);

    resultadoResta=restar(x,y);
    printf("b) El resultado de %d-%d es: %d\n",x,y,resultadoResta);

    resultadoDivision=dividir(x,y);
    if(y==0)
    {
        printf("c) No es posible dividir por cero\n");
    }else
    {
        printf("c) El resultado de %d/%d es: %f\n",x,y,resultadoDivision);
    }

    resultadoMultiplicacion=multiplicar(x,y);
    printf("d) El resultado de %d*%d es: %d \n",x,y,resultadoMultiplicacion);

    resultadoFactorizadoX=factorizar(x);
    resultadoFactorizadoY=factorizar(y);
    if(x<13 && y<13)
    {
        printf("e) El factorial de %d es: %d y El factorial de %d es: %d\n",x,resultadoFactorizadoX,y,resultadoFactorizadoY);
    }else
    {
        if(x>12 && y<13)
        {
            printf("e) Esta calculadora no esta preparada para factorear numeros mayores a 12. El factorial de %d es: %d\n",y,resultadoFactorizadoY);
        }else
        {
            if(x<13 && y>12)
            {
                printf("e) El factorial de %d es: %d .Esta calculadora no esta preparada para factorear numeros mayores a 12\n",x,resultadoFactorizadoX);
            }else
            {
                if(x>12 && y>12)
                {
                    printf("e) Esta calculadora no esta preparada para factorear numeros mayores a 12\n");
                }
            }
        }
    }

}
