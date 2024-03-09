#include <iostream>
using namespace std;

struct nodo {
    int codigo;
    int saldo;
    nodo *sig;
}; 

nodo *cab, *aux, *aux2; 


int registrar(){
   aux = ((struct nodo *) malloc (sizeof(struct nodo)));
   aux->codigo = 1;
   cout<<"Cual es el saldo: "<<endl;
   cin>>aux->saldo;
   aux->sig = NULL;
   cout<<"Direccion: "<<aux<<endl;
   if(!cab){
    cab = aux;
   } else {
    aux2 = cab;
    while(aux2->sig!=NULL)
        aux2 = aux2->sig;
    aux2->sig = aux;
   }
}
int mostrar(){
    for(aux=cab; aux!=NULL; aux = aux->sig){
        cout<<"Saldo: "<<aux->saldo<<endl;
        cout<<"Direccion: "<<aux<<endl;
    }

}
int main(){
    int opc=0;
    do {
        cout<<"1. Registrar"<<endl;
        cout<<"2. Mostrar"<<endl;
        cin>>opc;
        switch (opc)
        {
        case 1: registrar();
            break;
        case 2: mostrar();
            break;
        }

    } while(opc!=5);
}