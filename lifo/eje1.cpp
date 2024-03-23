#include <iostream>
#include <malloc.h>
using namespace std;

struct nodo {
    int valor;
    nodo *sig;
}; 

nodo *top, *aux, *top2; 

int registrar(){
    aux = ((struct nodo *) malloc(sizeof(struct nodo)));
    cout<<"Cual es el valor: ";
    cin>>aux->valor;
    if(top==NULL){
        top = aux;
        top->sig = NULL;
    } else {
        aux->sig = top;
        top = aux;
    }
}
int mostrar(){
    /*
    cout<<endl<<"Esto esta muy mal... tiene cero: "<<endl;
    for(aux=top; aux!=NULL; aux=aux->sig){
        cout<<aux->valor<<endl;
    }
    */
    while(top!=NULL){
        cout<<"Valor: "<<top->valor<<endl;
        aux = top;
        top = top->sig;
        if(top2==NULL){
            top2 = aux;
            top2->sig = NULL;
        } else {
            aux->sig = top2;
            top2 = aux;
        }
    }
}
int main(){
    int opc;
    do{
        cout<<"Menu"<<endl;
        cout<<"1. Registrar"<<endl;
        cout<<"2. Mostrar"<<endl;
        cout<<"3. Salir"<<endl;
        cin>>opc;
        switch(opc){
            case 1: registrar(); break;
            case 2: mostrar(); break;
        }
    }while(opc!=3);   
}