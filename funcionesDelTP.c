#include "funcionesDelTP.h"

/** \brief Pedir un numero int dentro de un conjunto acompanado de un string.
 *
 * \param Recive un int.
 * \param Recive un char.
 * \return Devuelve un int acompanado de un string.
 *
 */
int ingresarOpcion (int operando,char mensaje[])
{
    int bandera;

    do
    {
        printf("%s",mensaje);
        scanf("%d",&operando);
        if(operando>0 && operando<6)
        {
            bandera = 0;
        }else
        {
            bandera = 1;
            printf("Opcion invalida!");
        }

    }
    while(bandera != 0);
    return operando;
}

/** \brief Pedir un numero int acompanado de un string.
 *
 * \param El numero int a pedir.
 * \param El mensaje a acompanar.
 * \return Un numero int acompanado de un string.
 *
 */
int pedidorNumero(int numero,char mensaje[])
{
    printf("%s",mensaje);
    scanf("%d",&numero);

    return numero;
}



