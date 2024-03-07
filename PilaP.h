#ifndef PilaP_h
#define PilaP_h
#include "Nodo.cpp"

class PilaP{
public:
            PilaP();
           ~PilaP();
         void CreaPilaP();
         bool PilaPVuota();
         void InsPilaP(Persona);
         void GetTotale();  
         void LeggiPilaP();
         void CancPilaP();
private:
     Nodo * start;
     int totale;    
};

#endif
