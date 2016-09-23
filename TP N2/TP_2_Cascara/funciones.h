#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
#define TAM 20
#define LIBRE -1
#define OCUPADO 0

typedef struct {

    char nombre[50];
    int edad;
    int estado;
    int dni;

}EPersona;

/** \brief Inicializa el vector con un numero tal que su estado sea libre.
 *
 * \param lista el array se pasa como parametro.
 * \param largo es el largo del array.
 * \return no retorna datos.
 *
 */
void inicializarVector(EPersona lista[],int largo);

/** \brief Carga los datos del campo de la estructura.
 *
 * \param lista el array se pasa como parametro.
 * \param libre es el primer indice libre del array estado.
 * \return no retorna datos.
 *
 */

void altas(EPersona lista[],int libre);

/** \brief Muestra por pantalla la lista de nombres ordenas alfabeticamente.
 *
 * \param lista el array se pasa como parametro.
 * \param largo es el largo del array.
 * \return no retorna datos.
 *
 */

void listarPorNombre(EPersona lista[],int largo);

/** \brief Muestra por pantalla un grafico de edades.
 *
 * \param lista el array se pasa como parametro.
 * \param largo es el largo del array.
 * \return no retorna datos.
 *
 */

void graficoEdad(EPersona lista[],int largo);

/**
 * Obtiene el primer indice libre del array.
 * @param lista el array se pasa como parametro.
 * @param largo el largo del array.
 * @return 1
 */

int obtenerEspacioLibre(EPersona lista[],int largo,int *libre);

/**
 * Obtiene el indice que coincide con el dni pasado por parametro.
 * @param lista el array se pasa como parametro.
 * @param dni el dni a ser buscado en el array.
 * @return el indice en donde se encuentra el elemento que coincide con el parametro dni
 */

int buscarPorDni(EPersona lista[], int dni, int largo);


#endif // FUNCIONES_H_INCLUDED
