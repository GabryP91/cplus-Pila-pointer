#include<iostream>
#include<cstdlib>
#include "PilaP.h"

using namespace std;

PilaP::PilaP(){
     CreaPilaP();               
}

PilaP::~PilaP(){}

void PilaP::CreaPilaP(){
      start=NULL;                   
}

bool PilaP::PilaPVuota(){
      return (start==NULL);     
}

void PilaP::InsPilaP(Persona e){
         Nodo * temp=new Nodo;
         temp->SetPersona(e);
         temp->SetNodo(start);
         start=temp; 
             
}


void PilaP::LeggiPilaP(){
        if(PilaPVuota())
        cout<<"La pila e' vuota!!"<<endl;
     else
     { 
     totale=totale+1;   
      cout<<"Inserimento numero: "<<totale<<endl<<endl;  
       start->GetPersona();   
       
     } 
}

void  PilaP::GetTotale(){
       cout<<endl<<endl<<"Totale inserimenti: "<<totale<<endl<<endl;
           
}

void PilaP::CancPilaP(){
           if(!PilaPVuota()){
                Nodo * temp=start;
                start=start->GetNodo();
                delete temp;                  
           }
}
