#include <iostream>
#include "Seccion.h"
#include <vector>
#include <conio.h>
#include <stdlib.h>

using namespace std;

//void redimensionar(string *Alumnos,int &Cupos);


using std:: vector;
Seccion *objSeccion;
//Seccion *objSeccion= new Seccion("Programacion","666","1800","123","5");
string *Listado, *ptr;

int main()
{
    cout<<objSeccion->getAula();
 int aumentarcupos(int cupos, int n);

  /*  objSeccion->setNombre("Programacion I");
    objSeccion->setAula("666");
    objSeccion->setHora("1800");
    objSeccion->setUV("5");*/

    int cupos=3;
    int n;

    cout<<"Ingrese nuevos cupos a agregar";
    cout<<endl;
    cin>>n;


   objSeccion->setCupos(aumentarcupos(cupos,n));


  objSeccion = new Seccion("Programacion","666","1800","123","5");
  objSeccion->Matricular("Pedro");



  /* objSeccion->Matricular("Pedro");
    objSeccion->Matricular("Pablo");
    objSeccion->Matricular("Vilma");
    objSeccion->Matricular("casemiro");
*/



    cout << objSeccion->getNombre();
    Listado = objSeccion->Listado();

    ptr= Listado;
    cout << endl << *ptr;
    ptr++;
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
    delete objSeccion; // Libera la memoria
    return 0;
}

int aumentarcupos(int cupos , int n){

int nuevoscupos= cupos+n;

return nuevoscupos;


}
/*void redimensionar(int *Alumnos, int &Cupos)//
{

    Cupos -> objSeccion.Cupos + 7;

    string *aux = new string[Cupos];

    for(int i = 0; i < Cupos - 10 ; i++)
    {
        aux[i] -> objSeccion.Alumnos[i];
    }

    delete[] objSeccion.Alumnos;

    objSeccion.Alumnos -> aux;
}
*/
