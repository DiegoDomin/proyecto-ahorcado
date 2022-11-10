#include <iostream>
#include <time.h>
#include <iomanip>

using namespace std;

void Jugarpartida();
void Dibujar();
void limpiarpantalla();
void ProbabilidadVocales(int);
void ProbabilidadConsonantes(int);
int opc;
char eleccion;
string palabras[]={"carro","autopista","vela","telefono","pirata","fibron","teclado","pc","astronauta","ingeniero",};
string palabra,fallidas;
string vocales[]= {"a", "e", "i", "o", "u"};
string consonantes[]= {"b", "c","d", "f", "g", "h", "j", "k", "l", "m", "n", "p", "q", "r", "s", "t", "v", "w", "x", "y", "z"};
int na;
int vida;
int aux = 0;
int num_vocales = 0;
int num_consonantes = 0;
float prob_vocales;
float prob_consonantes;
bool correcta,completa;

int main(){

    while(opc!=4){
        
        palabra= "";
        fallidas= "";
        limpiarpantalla();
        cout<<"\n|----------------------------------------------------------|";
        cout<<"\n|            BIENVENIDOS AL JUEGO UCA AHORCADO             |";
        cout<<"\n|----------------------------------------------------------|";
        cout<<"\n| El juego consiste en poder adivinar la palabra planteada |";
        cout<<"\n|                   por el programa                        |";
        cout<<"\n|----------------------------------------------------------|";
        cout<<"\n|       Que empiece la diversion intenta no despegar       |";
        cout<<"\n|                  los pies del suelo                      |";
        cout<<"\n|----------------------------------------------------------|";
        cout<<"\n|Si deseas jugar, elije el nivel de dificultad :           |";
        cout<<"\n|----------------------------------------------------------|";
        cout<<"\n|    Numero      |        Nivel          |    N.Vidas      |";
        cout<<"\n|----------------------------------------------------------|";
        cout<<"\n|       1.       |        Facil          |      8          |";
        cout<<"\n|       2.       |      intermedio       |      7          |";
        cout<<"\n|       3.       |      Muy Dificil      |      6          |";
        cout<<"\n|       4.       |        Salir          |      -          |";
        cout<<"\n|----------------------------------------------------------|";
        cout<<"\n|Ingresa una Opcion:";cin>>opc;  
       
       
       //menu de opciones de juego
        switch(opc){

            case 1: 
            vida=8;
            Jugarpartida();
            break;

            case 2:
            vida=7;
            Jugarpartida();
            break;

            case 3:
            vida=6;
            Jugarpartida();
            break;

            case 4:break;
        }

    }

    return 0;
}
//funcion para limpiar la pantalla de la consola
void limpiarpantalla(){
 if(system("clear")==-1){ //uso del system clear para limpiar consola
    cout<<"error al borrar pantalla "; //poner un mensaje de error de borrado en caso de que funcione
 }
}

//funcion de palabras aleatorias
void Jugarpartida(){
 srand((int)time(NULL)); //instruccion que inicializa el generador de numeros aleatorios
 na=rand()%10; //uso del rand con el modulo con el tamaño del arreglo para poner las palabras aleatoriamente
 for(int i=0;i<(int)palabras[na].size();i++){ //uso de un for para hacer la iteracion del srand y rand
    palabra+="-"; //cada que se ponga una palabra se ponga un guion 
 }

//funcion para las vidas
 while(vida>0){
    limpiarpantalla();
    cout<<"\t:::AHORCADO:::"<<endl;
    Dibujar(); //llamar a la funcion dibujar
    cout<<"  Fallos: "<<fallidas<<endl; //impresion de los fallos
    ProbabilidadVocales(aux);
    ProbabilidadConsonantes(aux);
    cout<<"  La palabra es: "<<palabra<<endl; //impresion de la palabra
    cout<<"ingrese una letra: ";
    cin>>eleccion;
    
    correcta=false; //declaracion de la variable bool
    
    for(int i=0;i<(int)palabras[na].size();i++){ //declarar el for para la iteracion de la eleccion de la letra
        if(palabras[na][i]==eleccion){ //condicional si la letra seleccionada esta en la palabra a adivinar
            palabra[i]=eleccion;
            correcta=true; // si la letra esta se retorna un true

        }
    }
    if(!correcta){ //si la letra no es correcta
        vida--;   //descontar una vida
        fallidas+=eleccion; //la suma de las fallidas y la eleccion 
        aux++;
    }
      completa=true; //si la palabra completa es verdadera
      for(int i=0;i<(int)palabra.size();i++){ //hacer la iteracion de la palabra
         if(palabra[i]=='-'){ //que la palabra se igual al numero de guiones
            completa =false; 
         }
      }
      if(completa){ //condicional para saber si la palabra fue adivinada
        cout<<"\t:::AHORCADO:::"<<endl;
        Dibujar();
        cout<<" La Palabra era: "<<palabras[na]<<endl;
        cout<<" ERES EL GANADOR!!!!! Ingresa un caracter para continuar: ";
        cin>>eleccion;
        return;
      }

       } //prototipo si la palabra no fue adivinada
        cout<<"\t:::AHORCADO:::"<<endl;
        Dibujar();
        cout<<" La Palabra era: "<<palabras[na]<<endl;
        cout<<" GAME OVEEEER!!!!!  Ingresa un caracter para continuar: ";
        cin>>eleccion;
        return;
 
}
//funcion para realizar el dibujo mediante se vaya fallando la palabra 
void Dibujar(){
    switch(vida){
        case 8:
        cout<<" --------"<<endl;
        cout<<" |      |"<<endl;
        cout<<" |"<<endl;
        cout<<" |"<<endl;
        cout<<" |"<<endl;
        cout<<" |"<<endl;
        cout<<" |"<<endl;
        cout<<"---";
        break;

        case 7:
        cout<<" --------"<<endl;
        cout<<" |      |"<<endl;
        cout<<" |"<<endl;
        cout<<" |"<<endl;
        cout<<" |"<<endl;
        cout<<" |"<<endl;
        cout<<" |"<<endl;
        cout<<"---";
        break;

        case 6:
        cout<<" --------"<<endl;
        cout<<" |      |"<<endl;
        cout<<" |"<<endl;
        cout<<" |"<<endl;
        cout<<" |"<<endl;
        cout<<" |"<<endl;
        cout<<" |"<<endl;
        cout<<"---";
        break;

        case 5:
        cout<<" --------"<<endl;
        cout<<" |      |"<<endl;
        cout<<" |      0"<<endl;
        cout<<" |"<<endl;
        cout<<" |"<<endl;
        cout<<" |"<<endl;
        cout<<" |"<<endl;
        cout<<"---";
        break;

        case 4: 
        cout<<" --------"<<endl;
        cout<<" |      |"<<endl;
        cout<<" |      0"<<endl;
        cout<<" |      T"<<endl;
        cout<<" |"<<endl;
        cout<<" |"<<endl;
        cout<<" |"<<endl;
        cout<<"---";
        break;

        case 3:
        cout<<" -------- "<<endl;
        cout<<" |      | "<<endl;
        cout<<" |      0 "<<endl;
        cout<<" |     /T "<<endl;
        cout<<" |"<<endl;
        cout<<" |"<<endl;
        cout<<" |"<<endl;
        cout<<"---";
        break;
        
        case 2:
        cout<<" -------- "<<endl;
        cout<<" |      | "<<endl;
        cout<<" |      0 "<<endl;
        cout<<" |     /T\\ "<<endl;
        cout<<" |"<<endl;
        cout<<" |"<<endl;
        cout<<" |"<<endl;
        cout<<"---";
        break;

        case 1:
        cout<<" --------"<<endl;
        cout<<" |      |"<<endl;
        cout<<" |      0"<<endl;
        cout<<" |     /T\\ "<<endl;
        cout<<" |     / "<<endl;
        cout<<" |"<<endl;
        cout<<" |"<<endl;
        cout<<"---";
        break;

        case 0:
        cout<<" --------"<<endl;
        cout<<" |      |  "<<endl;
        cout<<" |      0  "<<endl;
        cout<<" |     /T\\ "<<endl;
        cout<<" |     / \\ "<<endl;
        cout<<" |"<<endl;
        cout<<" |"<<endl;
        cout<<"---";
        break;


    }
}

void ProbabilidadVocales(int fallos){

    string vocales[]= {"a", "e", "i", "o", "u"}; //El usuario puede escoger entre estas opciones si quiere poner una vocal
    
    int tam_v = sizeof(vocales)/sizeof(string); //Tamaño del arreglo vocales
    num_vocales = 0; //Inicializador de la variable que contara el numero de vocales que haya en la palabra aleatoria 
    prob_vocales = 0; 

    if (fallos < 0){ //Condicional por si el usuario no se ha equivocado en alguna letra 
        for (int i = 0; i < tam_v; i++){ //Recorre el arreglo de vocales
            for(int j = 0;j <palabra.size();j++){ //Recorre el arreglo en donde se guarda la palabra aleatoria
                if(vocales[i][0] == palabras[na][j]){ //Condicional para comparar si hay vocales que se tienen en el arreglo vocales dentro de la palabra aleatoria 
                    num_vocales++; //De cumplirse la condición anterior se agrega uno al numero de vocales
                }  
            } 
        }
        prob_vocales = (float(num_vocales)/float(palabra.size()))*100;//Despues de recorrer el arreglo y de cumplirse las condiciones se procede a calcular la probabilidad
        cout <<"La probabilidad de que usted seleccione una vocal es de "<<fixed << setprecision(1) <<prob_vocales<< "%" << endl;//Fixed y setprecision() hacen que se redondee a un decimal
    
    }else { //De haberse equivocado el usuario en alguna letra se pasa a este bloque
        for (int i = 0; i < tam_v; i++){ //Se recorre el arreglo de vocales x2
            for(int j = 0;j <palabra.size();j++){ //Recorre el arreglo en donde se guarda la palabra aleatoria x2
                if(vocales[i][0] == palabras[na][j]){ //Condicional para comparar si hay vocales que se tienen en el arreglo vocales dentro de la palabra aleatoria x2
                    num_vocales++;//De cumplirse la condición anterior se agrega uno al numero de vocales x2
                }
                if (palabra[j]== vocales[i][0]){ //De haberse cumplido la condición anterior se procede a comparar si el usuario ingreso una vocal que se encuentre en la palabra aleatoria
                    num_vocales--; //De cumplirse el caso anterior esa letra deja de contar al momento de calcular la probabilidad y es por eso que se decrece en uno
                }      
            }  
        }
        prob_vocales = (float(num_vocales)/float(palabra.size()))*100;//Se vuelve a aplicar la formula para calcular la probabilidad
        cout <<"La probabilidad de que usted seleccione una vocal es de "<<fixed << setprecision(1) <<prob_vocales<< "%" << endl;
    }
}

void ProbabilidadConsonantes(int fallos){

    string consonantes[]= {"b", "c","d", "f", "g", "h", "j", "k", "l", "m", "n", "p", "q", "r", "s", "t", "v", "w", "x", "y", "z"};  //El usuario puede escoger entre estas opciones si quiere poner una consonante
    
    int tam_c = sizeof(consonantes)/sizeof(string); //Tamaño del arreglo consonantes
    num_consonantes=0; //Inicializador de la variable que contara el numero de consonantes que haya en la palabra aleatoria 
    prob_consonantes = 0;

    if (fallos < 0){ //Condicional por si el usuario no se ha equivocado en alguna letra 
        for (int i = 0; i < tam_c; i++){ //Recorre el arreglo de consonantes
            for(int j = 0;j <palabra.size();j++){ //Recorre el arreglo en donde se guarda la palabra aleatoria
                if(consonantes[i][0] == palabras[na][j]){ //Condicional para comparar si hay consonantes que se tienen en el arreglo consonantes dentro de la palabra aleatoria 
                    num_consonantes++; //De cumplirse la condición anterior se agrega uno al numero de consonantes
                }   
            } 
        }
        prob_consonantes = (float(num_consonantes)/float(palabra.size()))*100; //Despues de recorrer el arreglo y de cumplirse las condiciones se procede a calcular la probabilidad
        cout <<"La probabilidad de que usted seleccione una consonante es de "  <<fixed << setprecision(1) <<prob_consonantes<< "%" << endl; //Fixed y setprecision() hacen que se redondee a un decimal
    
    }else { //De haberse equivocado el usuario en alguna letra se pasa a este bloque
        for (int i = 0; i < tam_c; i++){ //Recorre el arreglo de consonantes x2
            for(int j = 0;j <palabra.size();j++){ //Recorre el arreglo en donde se guarda la palabra aleatoria x2
                if(consonantes[i][0] == palabras[na][j]){ //Condicional para comparar si hay consonantes que se tienen en el arreglo consonantes dentro de la palabra aleatoria 
                    num_consonantes++; //De cumplirse la condición anterior se agrega uno al numero de consonantes x2
                } 
                if (palabra[j]== consonantes[i][0]){ //De haberse cumplido la condición anterior se procede a comparar si el usuario ingreso una consonante que se encuentre en la palabra aleatoria
                        num_consonantes--; //De cumplirse el caso anterior esa letra deja de contar al momento de calcular la probabilidad y es por eso que se decrece en uno
                }      
            }  
        }
        prob_consonantes = (float(num_consonantes)/float(palabra.size()))*100; //Se vuelve a aplicar la formula para calcular la probabilidad
        cout <<"La probabilidad de que usted seleccione una consonante es de "  <<fixed << setprecision(1) <<prob_consonantes<< "%" << endl;
    }
}
