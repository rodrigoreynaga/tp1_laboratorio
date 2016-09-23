#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{
    char seguir='s';
    int opcion;
    int auxInt;
    EPersona persona[TAM];

    inicializarVector(persona,TAM);

    while(seguir=='s')
    {
        printf("1- Agregar persona\n");
        printf("2- Borrar persona\n");
        printf("3- Imprimir lista ordenada por  nombre\n");
        printf("4- Imprimir grafico de edades\n");
        printf("5- Salir\n");
        printf("\n\nIngrese Opcion: ");
        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
                if(obtenerEspacioLibre(persona,TAM,&auxInt)==1)
                {
                   altas(persona,auxInt);
                }
                else
                {
                    printf("No hay espacio libre...\n");
                }
                system("Pause");
                system("cls");
                break;
            case 2:
                auxInt=buscarPorDni(persona,auxInt,TAM);
                persona[auxInt].estado = LIBRE;
                printf("La datos han sido dados de baja\n");
                break;
            case 3:
                listarPorNombre(persona,TAM);
                break;
            case 4:
                graficoEdad(persona,TAM);
                break;
            case 5:
                seguir = 'n';
                break;
            default:
                fflush(stdin);
                printf("Ingrese una opcion del menu!!!\n");
                system("Pause");
                system("cls");
                break;
        }
    }
    return 0;
}
