// ARCHIVO CON LAS VARIABLES Y LAS FUNCIONES
#include <iostream>
#include <time.h>

using namespace std;

/*
    Utilizamos arreglos con indices correspondientes para
    determinar la cantidad de vocales y consonantes únicas
    en cada palabra
*/

string palabras[] = {
    // Palabras quemadas, con indices
    "barco",    // 0 -> barco
    "saludo",   // 1 -> saludo
    "basurero", // 2 -> basurero
    "perrito"   // 3 -> perrito
};

int vocales[] = {
    2, // Dos vocales distintas en el indice 0
    3, // Tres vocales distintas en el indice 1
    4, // Cuatro vocales distintas en el indice 2
    3  // Tres vocales distintas en el indice 3
};

int consonantes[] = {
    3, // Tres consonantes distintas en el indice 0
    3, // Tres consonantes distintas en el indice 1
    3, // Tres consonantes distintas en el indice 2
    3  // Tres consonantes distintas en el indice 3
};

/*
    Las siguientes 3 funciones, son para retornar
    el valor del indice seleccionado, siguiendo las reglas
    de separar las acciones en funciones distintas.
*/
int set_vocales(int index)
{
    return vocales[index];
}

int set_consonantes(int index)
{
    return consonantes[index];
}

string set_palabra(int index)
{
    return palabras[index];
}

// Funcion para generar un indice "aleatorio" entre 0 y 3

int random_index()
{
    srand(time(NULL));
    return (rand() % 4); 
}

// Funcion principal de probabilidad

double prob(int casos_favorables, int casos_posibles)
{
    // Se multiplica por 1.0 para convertir el int a double implicitamente
    return (casos_favorables * 1.0) / (casos_posibles * 1.0);
}