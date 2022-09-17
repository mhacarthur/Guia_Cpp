
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(){

	cout << endl;
	cout << "O Codigo resolve a seguente operacao combinada" << endl;
	cout << "30x + 5x - 8( x + 3)/2 + (4x - (6y -2x))" << endl;
	cout << "Usando valores ingressados pelo usuario" << endl; 
	cout << endl;

	int x = 0;
	int y = 0;
	int salida = 0;

	cout << "Ingresse o valor de x: ";
	cin >> x;

	cout << "Ingresse o valor de y: ";
	cin >> y;

	salida = 30*x + 5*x - 8*(x + 3)/2 + (4*x - (6*y -2*x));

	cout << "O resultado foi: " << salida << endl;

}