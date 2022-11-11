#include <iostream>

using namespace std;

/*
    En este archivo se definen todas las funciones de impresion
    puesto que son estáticas, y se ve desordenado colocarlas en
    el main.
*/


void print_welcome()
{
    cout << "\n|----------------------------------------------------------|";
    cout << "\n|            BIENVENIDOS AL JUEGO UCA AHORCADO             |";
    cout << "\n|----------------------------------------------------------|";
    cout << "\n| El juego consiste en poder adivinar la palabra planteada |";
    cout << "\n|                   por el programa                        |";
    cout << "\n|----------------------------------------------------------|";
    cout << "\n|       Que empiece la diversion intenta no despegar       |";
    cout << "\n|                  los pies del suelo                      |";
    cout << "\n|----------------------------------------------------------|";
    cout << "\n|Si deseas jugar, elije el nivel de dificultad :           |";
    cout << "\n|----------------------------------------------------------|";
    cout << "\n|    Numero      |        Nivel          |    N.Vidas      |";
    cout << "\n|----------------------------------------------------------|";
    cout << "\n|       1.       |        Facil          |      8          |";
    cout << "\n|       2.       |      Intermedio       |      7          |";
    cout << "\n|       3.       |       Dificil         |      6          |";
    cout << "\n|       4.       |        Salir          |      -          |";
    cout << "\n|----------------------------------------------------------|";
    cout << "\n| Ingrese la opcion a escoger: ";
}

void print_hangman(int lives)
{
    switch (lives)
    {
    case 8: // Esta sintaxis del switch, quiere decir que 
    case 7: // en caso sea 8, 7 o 6, 
    case 6: // va a realizar la misma instruccion
        cout << " --------" << endl;
        cout << " |      |" << endl;
        cout << " |" << endl;
        cout << " |" << endl;
        cout << " |" << endl;
        cout << " |" << endl;
        cout << " |" << endl;
        cout << "---";
        break;

    case 5:
        cout << " --------" << endl;
        cout << " |      |" << endl;
        cout << " |      0" << endl;
        cout << " |" << endl;
        cout << " |" << endl;
        cout << " |" << endl;
        cout << " |" << endl;
        cout << "---";
        break;

    case 4:
        cout << " --------" << endl;
        cout << " |      |" << endl;
        cout << " |      0" << endl;
        cout << " |      T" << endl;
        cout << " |" << endl;
        cout << " |" << endl;
        cout << " |" << endl;
        cout << "---";
        break;

    case 3:
        cout << " -------- " << endl;
        cout << " |      | " << endl;
        cout << " |      0 " << endl;
        cout << " |     /T " << endl;
        cout << " |" << endl;
        cout << " |" << endl;
        cout << " |" << endl;
        cout << "---";
        break;

    case 2:
        cout << " -------- " << endl;
        cout << " |      | " << endl;
        cout << " |      0 " << endl;
        cout << " |     /T\\ " << endl;
        cout << " |" << endl;
        cout << " |" << endl;
        cout << " |" << endl;
        cout << "---";
        break;

    case 1:
        cout << " --------" << endl;
        cout << " |      |" << endl;
        cout << " |      0" << endl;
        cout << " |     /T\\ " << endl;
        cout << " |     / " << endl;
        cout << " |" << endl;
        cout << " |" << endl;
        cout << "---";
        break;

    case 0:
        cout << " --------" << endl;
        cout << " |      |  " << endl;
        cout << " |      0  " << endl;
        cout << " |     /T\\ " << endl;
        cout << " |     / \\ " << endl;
        cout << " |" << endl;
        cout << " |" << endl;
        cout << "---";
        break;
    }
}