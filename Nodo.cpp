#include<cstdlib>
#include<iostream>
#include "Nodo.h"

using namespace std;

Nodo::Nodo(void){
       x=NULL;                 
}

void Nodo::SetPersona(Persona e){
           uno=e;
}

Persona Nodo::GetPersona(){ 
      cout<<"Nome:       "<<uno.nome<<endl;
      cout<<"Cognome:    "<<uno.cognome<<endl;
      cout<<"Stipendio:  "<<uno.stipendio<<endl<<endl;
      return uno; 
}

void Nodo::SetNodo(Nodo * y){
      y=x;     
}

Nodo * Nodo::GetNodo(){
       return x;     
}

