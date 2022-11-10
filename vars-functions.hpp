// ARCHIVO CON LAS VARIABLES Y LAS FUNCIONES

#include <iostream>
#include "prints.hpp"
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