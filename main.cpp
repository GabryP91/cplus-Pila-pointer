#include <cstdlib>
#include <iostream>
#include "PilaP.cpp"

using namespace std;

int main(int argc, char *argv[])
{
    PilaP x;
    Persona y,z,u;

    y.nome="mario";
    y.cognome="rossi";
    y.stipendio=15.22;
    
    z.nome="luigi";
    z.cognome="bianchi";
    z.stipendio=55.81;
    
    
    x.InsPilaP(y);
    x.LeggiPilaP();
    
    x.InsPilaP(z);
    x.LeggiPilaP();
    
    x.GetTotale();
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
