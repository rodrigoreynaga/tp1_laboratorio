#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "funciones.h"


void altas(EPersona lista[],int libre)
{
    printf("Ingrese Nombre: ");
    fflush(stdin);
    gets(lista[libre].nombre);

    printf("Ingrese edad: ");
    scanf("%d",&lista[libre].edad);

    printf("Ingrese DNI: ");
    scanf("%d",&lista[libre].dni);

    lista[libre].estado = OCUPADO;
}

int obtenerEspacioLibre(EPersona lista[],int largo,int *libre)
{
    int i;
    for(i=0; i<largo; i++)
    {
        if(lista[i].estado == LIBRE)
        {
            *libre = i;
            return 1;
            break;
        }
    }
    return 0;
}

void inicializarVector(EPersona lista[],int largo)
{
    int i;
    for(i=0; i<largo; i++)
    {
        lista[i].estado = LIBRE;
    }

}

int buscarPorDni(EPersona lista[], int dni, int largo)
{
    int i;
    printf("Ingrese DNI a buscar: ");
    scanf("%d",&dni);

    for(i=0; i<largo; i++)
        if(dni==lista[i].dni)
        {
            return i;
            break;
        }
        else
        {
            printf("El dni ingresado no existe!!!");
        }
}

void listarPorNombre(EPersona lista[],int largo)
{
    int i,j;
    EPersona aux;

    for(i=0; i<largo-1; i++)
    {
        for(j=i+1; j<largo; j++)
        {
            if(strcmp(lista[i].nombre,lista[j].nombre)>0)
            {
                aux=lista[i];
                lista[i]=lista[j];
                lista[j] = aux;
            }
        }
    }

    for(i=0; i<largo; i++)
    {
        if(lista[i].estado == OCUPADO)
        {

            printf("%s----%d----%d\n",lista[i].nombre,lista[i].edad,lista[i].dni);
        }

    }
}

void graficoEdad(EPersona lista[],int largo)
{
    int menor18=0,entre18y35=0,mayor35=0,maximo=0,flag=0;
    int i, auxInt;

    printf("\n- GRAFICO DE EDADES -\n");

    for(i=0; i<largo; i++)
    {
        if(lista[i].estado==OCUPADO)
        {
            auxInt = lista[i].edad;
             if(auxInt<18)
             {
                menor18++;
             }
             else if(auxInt>=18 && auxInt<=35)
             {
                entre18y35++;
             }
             else
             {
                mayor35++;
             }
        }
    }

    for(i=0;i<3;i++)
    {
        if(menor18 > maximo || i==0)
        {
            maximo = menor18;
        }


        if(entre18y35 > maximo)
        {
            maximo = entre18y35;
        }
        if(mayor35 > maximo)
        {
            maximo = mayor35;
        }
    }

    for(i=maximo; i>0; i--)
    {
        if(i<10)
        {
            printf("%02d|",i);
        }
        else
        {
            printf("%02d|",i);
        }
        if(i<= menor18)
        {
            printf("*");
        }
        if(i<= entre18y35)
        {
            flag=1;
            printf("\t*");
        }
        if(i<= mayor35)
        {
            if(flag==0)
            {
                printf("\t\t*");
            }
            if(flag==1)
            {
                printf("\t*");
            }


        }
        //Bajo una linea luego de cada iteracion
        printf("\n");
    }

    printf("--+-----------------");
    printf("\n  |<18\t19-35\t>35");
    printf("\n   %d\t%d\t%d\n\n", menor18, entre18y35, mayor35);

    system("pause");
    system("cls");

}
