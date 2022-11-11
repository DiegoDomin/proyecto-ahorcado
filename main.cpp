#include <iostream>
#include <iomanip>

using namespace std;

#include "vars-functions.hpp"
#include "prints.hpp"

int jugar_partida(string palabra_adivinar, int vocales, int consonantes, int vidas);

int main()
{
    string palabra_adivinar = "";
    int vidas = 0, vidas_restantes = 0;
    int menu_option = 0;
    int vocales = 0, consonantes = 0;
    bool show_menu = true;

    print_welcome();

    do
    {
        cin >> menu_option;
        switch (menu_option)
        {
        case 1:
            vidas = 8;
            show_menu = false;
            break;
        case 2:
            vidas = 7;
            show_menu = false;
            break;
        case 3:
            vidas = 6;
            show_menu = false;
            break;
        case 4:
            show_menu = false;
            break;
        default:
            cout << "Intente de nuevo.\n";
            show_menu = true;
            break;
        }
    } while (show_menu);

    cout << "Tienes " << vidas << " vidas!\n";

    /*
    En la siguientes funciones se establece un indice aleatorio, y se
    establecen la palabra que va a ser adivinada.
    */

    int index = random_index(); // Por ejemplo, random_index devuelve 2, entonces

    palabra_adivinar = set_palabra(index);
    /*  palabra_adivinar va a ser palabras[2], que es igual a decir que sera basurero.
        Como ya sabemos que la palabra si o si será basurero, entonces, siempre
        va a tener vocales[2] y consontantes[2], o sea
    */
    consonantes = set_consonantes(index); // vocales[2] = 4 vocales
    vocales = set_vocales(index); // consonantes[2] = 3 consonantes


    vidas_restantes = jugar_partida(palabra_adivinar, vocales, consonantes, vidas);

    /*

    En esta parte del main usen un if para determinar si gano o si perdio, y muestran
    las impresiones correspondientes, junto con la palabra que era. O un mensaje de
    felicitaciones, o de vuelve a intentarlo. Depende de ustedes, pero basicamente
    es para darle los mensajes finales al usuario.

    */
}

int jugar_partida(string palabra_adivinar, int vocales, int consonantes, int vidas)
{

    /*

    Aqui aplican toda la logica de iterar la palabra y buscar cada caracter en la string, y si es igual
    le bajan ya sea a las vocales o a las consonantes para establecer las probabilidades de ambas.

    Cuando despues de cada intento de letra, usan la funcion prob con las cantidades correspondientes.

    Esta funcion devuelve un entero, que son las vidas restantes despues de adivinar o no la palabra.

    O sea, si gana, devuelven cuantas vidas le quedan. Si pierde, devuelven 0

    */
}
