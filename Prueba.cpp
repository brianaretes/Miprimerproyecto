#include <iostream>
#include <string>
using namespace std;
int main() {
    string nombre;
    cout << "Ingrese su nombre: ";
    getline(cin, nombre);
    cout << "Hola, " << nombre << endl;
    int edad;
    cout<<"Ingrese su edad: ";
    cin >>edad;
    cout<<"Su edad es: "<<edad;
    return 0;
}