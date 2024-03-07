#ifndef Nodo_h
#define Nodo_h
#include "Persona.h"

class Nodo{
public:
        Nodo();
        void SetPersona(Persona);
        Persona GetPersona();
        void SetNodo(Nodo*);
        Nodo* GetNodo();
private:
       Persona uno;
       Nodo * x;      
};


#endif
