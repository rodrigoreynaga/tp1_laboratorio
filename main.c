#include <stdio.h>
#include <stdlib.h>
#include "Funciones.h"
int main()
{
    float primerOperando;
    float segundoOperando;
    float resultado;
    int opcion=0;
    int flag=0;
    char respuesta='s';
    //Bucle de control de finalizacion del programa.
    do{
    printf("Bienvenido a Calculadora !!!\n\n1-Ingresar 1er operando\n2-Ingresar 2do operando\n3-Sumar\n4-Restar\n5-Dividir\n6-Multiplicar\n7-Factorial\n8-Todas las operaciones\n9-Salir\n\n");
    printf("Ingrese opcion: ");
    scanf("%d",&opcion);
    //Bucle de control. Validacion de la opcion ingresada al menu.
    while(opcion<1 || opcion>9)
    {
        printf("Error !... Reingrese opcion correcta (1-9): ");
        scanf("%d",&opcion);
    }
    if(flag==0)
    {
        while(opcion !=1 && opcion !=2 && opcion !=9)
        {
            printf("\nERROR !!! primero debe ingresar operandos para calcular, o salir con la opcion 9\n\nReingrese opcion: \a");
            scanf("%d",&opcion);
        }
        flag++;
    }
    //Bloque que controla el ingreso al menu de opciones.
    switch(opcion)
    {
    //Caso de ingreso del primer operando.
    case 1:
        primerOperando=pedirNumero();
        printf("Primer operando: %.2f\n\n",primerOperando);
        system("pause");
        system("cls");
        break;
    //Caso de ingreso del segundo operando y visualizacion de ambos operandos.
    case 2:
        segundoOperando=pedirNumero();
        printf("Segundo operando: %.2f\n\n",segundoOperando);
        system("pause");
        system("cls");
        printf("Primer operando: %.2f\nSegundo operando: %.2f\n\n",primerOperando,segundoOperando);
        printf("Si desea realizar algun cambio en los operando vuelva a elegir la opcion correspondiente al mismo, de lo contrario continue con la operacion.\n\n");
        break;
    //Caso que realiza y muestra la operacion sumar.
    case 3:
        resultado=sumar(primerOperando,segundoOperando);
        printf("Suma= %.2f\n\n",resultado);
        system("pause");
        system("cls");
        break;
    //Caso que realiza y muestra la operacion restar.
    case 4:
        resultado=restar(primerOperando,segundoOperando);
        printf("Resta= %.2f\n\n",resultado);
        system("pause");
        system("cls");
        break;
    //Caso que realiza y muestra la operacion dividir.
    case 5:
        //Bucle de control. Validacion de los numeros ingresados sean > 0, para dividir.
        while(primerOperando==0 || segundoOperando==0)
        {
            printf("Error!!! No es posible dividir por '0'\n\n");
            system("pause");
            if(primerOperando==0)
            {
                printf("Reingrese primer operando: ");
                scanf("%f",&primerOperando);
            }
            else if(segundoOperando==0)
            {
                printf("Reingrese segundo operando: ");
                scanf("%f",&segundoOperando);
            }
        }
        resultado=dividir(primerOperando,segundoOperando);
        printf("Division= %.2f\n\n",resultado);
        system("pause");
        system("cls");
        break;
    //Caso que realiza y muestra la operacion multiplicar.
    case 6:
        resultado=multiplicar(primerOperando,segundoOperando);
        printf("Multiplicacion= %.2f\n\n",resultado);
        system("pause");
        system("cls");
        break;
    //Caso que realiza y muestra la operacion factorial.
    case 7:
        resultado=factorial(primerOperando);
        printf("Factorial= %.2f\n\n",resultado);
        system("pause");
        system("cls");
        break;
    //Caso que realiza,valida y muestra todas las operaciones del menu.
    case 8:
        while(primerOperando==0 || segundoOperando==0)
        {
            printf("Error!!! No es posible dividir por '0'\n\n");
            system("pause");
            if(primerOperando==0)
            {
                printf("Reingrese primer operando: ");
                scanf("%f",&primerOperando);
            }
            if(segundoOperando==0)
            {
                printf("Reingrese segundo operando: ");
                scanf("%f",&segundoOperando);
            }
        }
        resultado=dividir(primerOperando,segundoOperando);
        printf("\nDivision= %.2f\n",resultado);

        resultado=sumar(primerOperando,segundoOperando);
        printf("Suma= %.2f\n",resultado);

        resultado=restar(primerOperando,segundoOperando);
        printf("Resta= %.2f\n",resultado);

        resultado=multiplicar(primerOperando,segundoOperando);
        printf("Multiplicacion= %.2f\n",resultado);

        resultado=factorial(primerOperando);
        printf("Factorial= %.2f\n\n",resultado);
        system("pause");
        system("cls");
        break;
    //Caso de salida del programa.
    case 9:
        respuesta='n';
        break;
    }

    }while(respuesta=='s');
    return 0;
}
