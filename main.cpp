#include <iostream>
#include "void.h"

using namespace std;

int main() {
    int ejem, respuesta = 1;
    while(respuesta == 1){
    cout<<"Bienvenido al mini mundo de los arrays, si desea entrar pulse 1, y si no pues pulse 2: "<<endl;
    cin>>respuesta;
    if (respuesta == 1){
        cout << "Selecciona el ejercicio que deseas probar:" << endl;
        cout << "\n1.Sumas de arrays." << endl;
        cout << "2.Numero mayor en un array." << endl;
        cout << "3.Invertir orden de un array." << endl;
        cout << "4.Sumas de arrays 2?" << endl;
        cout << "5.Frutas :b" << endl;
        cout << "\nIngrese la opcion deseada: ";
        cin>>ejem;

        switch (ejem) {

            case 1:
                fun1();
                cout << "\nDeseas probar otro ejercicio? (ponga un 1 para si y un 2 para no):" <<endl;cin>>respuesta;
                cout << "\nHasta pronto :b\n" <<endl;
                break;

            case 2:
                fun2();
                cout << "\nDeseas probar otro ejercicio? (ponga un 1 para si y un 2 para no):" <<endl;cin>>respuesta;
                cout << "\nHasta pronto :b\n" <<endl;
                break;

            case 3:
                fun3();
                cout << "\nDeseas probar otro ejercicio? (ponga un 1 para si y un 2 para no):" <<endl;cin>>respuesta;
                cout << "\nHasta pronto :b\n" <<endl;
                break;

            case 4:
                fun4();
                cout << "\nDeseas probar otro ejercicio? (ponga un 1 para si y un 2 para no):" <<endl;cin>>respuesta;
                cout << "\nHasta pronto :b\n" <<endl;
                break;

            case 5:
                fun5();
                cout << "\nDeseas probar otro ejercicio? (ponga un 1 para si y un 2 para no):" <<endl;cin>>respuesta;
                cout << "\nHasta pronto :b\n" <<endl;
                break;
        }

    }else{
        cout <<"Chale ya te vas? :c" << endl;
    }
    }

    return 0;
}
