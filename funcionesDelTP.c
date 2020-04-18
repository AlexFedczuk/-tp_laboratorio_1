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

/** \brief Preguntar al usuario si desea continuar o no.
 *
 * \return Un numero int.
 *
 */
int salirPrograma()
{
    char opcionElegida;
    int bandera;

    do
    {
        printf("\nDesea salir? Si(s) o No(n): ");
        fflush(stdin);
        scanf("%c",&opcionElegida);
        if(opcionElegida=='s')
        {
            bandera=0;
        }else
        {
            if(opcionElegida=='n')
            {
                bandera=-1;
            }else
            {
                printf("Error! Opcion invalida.");
            }
        }
    }
    while(opcionElegida!='s' && opcionElegida!='n');


    return bandera;
}



