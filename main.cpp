#include <iostream>
#include "Seccion.h"

using namespace std;

//Seccion *objSeccion;
Seccion *objSeccion= new Seccion(3);
string *Listado, *ptr;

int main()
{
    objSeccion->setNombre("Programacion I");
    objSeccion->setAula("666");
    objSeccion->setHora("1800");
    objSeccion->setUV("5");

    //objSeccion->setCupos(3);

    objSeccion->Matricular("Pedro");
    objSeccion->Matricular("Pablo");
    objSeccion->Matricular("Vilma");

    objSeccion->setCupos(10);

    objSeccion->Matricular("Bety");

    cout << objSeccion->getNombre();
    Listado = objSeccion->Listado();

    ptr= Listado;
    cout << endl << *ptr;
    ptr++;
    cout << endl << *ptr;
    ptr++;
    cout << endl << *ptr;

    cout << endl << "======Con ciclo for=======";
    ptr= Listado;
    for(int i= 0; i <= objSeccion->getUltimo(); i++){
        cout << endl << *ptr;
        ptr++;
    }
    return 0;
}
