#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
class Registro {
// Por omisión esto es la sección privada
char nombre[50];
char telefono[15];
public: // Sección pública
void Iniciar (void);
void EntradaDatos (void);
void SalidaDatos (void);
} registro1;

// Programa principal
int main(void) {
Registro registro2;
registro1.Iniciar();
registro2.Iniciar();
registro1.EntradaDatos();
registro2.EntradaDatos();
registro1.SalidaDatos();
registro2.SalidaDatos();
}

// Funciones miembro de la clase Registro
void Registro::Iniciar (void) {
    strcpy(nombre, "");
    strcpy(telefono, "");
}

void Registro::EntradaDatos (void) {
cout << "\nNombre: ";
cin >> nombre;
cout << "Telefono: ";
cin >> telefono;
}

void Registro::SalidaDatos (void) {
cout << "\n\nNombre:\t\t" << nombre << "\n";
cout << "Telefono:\t" << telefono << "\n";
}
