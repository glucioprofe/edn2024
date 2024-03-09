#include <iostream>
using namespace std;

struct paciente {
    int telefono;
    char nombre[30];
    paciente *sig;
}; 

paciente *cab, *aux, *aux2; 


int registrar(){
   aux = ((struct paciente *) malloc (sizeof(struct paciente)));
   cout<<"Cual es el telefono: "<<endl;
   aux->telefono = 1;
   cout<<"Cual es el nombre: "<<endl;
   cin>>aux->nombre;
   aux->sig = NULL;
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
        cout<<"Telefono: "<<aux->telefono<<endl;
        cout<<"Nombre: "<<aux->nombre<<endl;
    }
}
int buscar(){
    int buscartelefono;
   cout<<"Cual es el telefono: "<<endl;
   cin>>buscartelefono;

    for(aux=cab; aux!=NULL; aux = aux->sig){
        if(aux->telefono==buscartelefono){
            cout<<"Telefono: "<<aux->telefono<<endl;
            cout<<"Nombre: "<<aux->nombre<<endl;
        }
    }

}
int main(){
    int opc=0;
    do {
        cout<<"1. Registrar"<<endl;
        cout<<"2. Mostrar"<<endl;
        cout<<"3. Buscar Telefono"<<endl;
        cin>>opc;
        switch (opc)
        {
        case 1: registrar();
            break;
        case 2: mostrar();
            break;
        
        case 3: buscar();
            break;
        }

    } while(opc!=5);
}