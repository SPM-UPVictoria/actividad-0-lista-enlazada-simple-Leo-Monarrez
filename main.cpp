#include <iostream>
#include <conio.h>


using namespace std;

struct elemento{
    int Numentero;
    struct elemento *sgte;
};

struct elemento *pInicial, *pAux, *pFinal;

void insertarLista(int valor){
    if (pInicial == NULL){
        pInicial = new (elemento);
        pInicial->Numentero = valor;
        pFinal = pInicial;
    }else{
        pAux = new(elemento);
        pFinal->sgte = pAux;
        pAux->Numentero = valor;
        pFinal = pAux;
    }
    pFinal->sgte = NULL;
}

void mostrar_elementos(){
    pAux = pInicial;
    int i=1;
    char respuesta;
    cout <<endl << endl << "Elementos de la lista enlazda :)" << endl <<endl;
    while (pAux != NULL){
        cout << "Elemento Valor: " << i <<"; " << pAux->Numentero<< endl;
        pAux = pAux->sgte;
    }
}

int main(){
    int valor;
    //agregar para validar
    char respuesta;
    do {
        cout << endl << "--------------------------------------";
        cout << endl <<"Ingrese un valor por favor: ";
        cin >> valor;
        insertarLista(valor);
        cout << endl << "¿Quiere ingresar mas valores? (S/N):";
        respuesta = getch();
        if (respuesta == 'S'){
        }else{
            cout <<endl <<"Gracias :)";
            return 0;
        }

    }while (respuesta == 'S');//valida con un "si"

}
