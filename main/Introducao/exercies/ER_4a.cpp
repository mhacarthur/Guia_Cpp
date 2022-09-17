
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(){

	cout << endl;
	cout << "O Codigo resolve a seguente operacao combinada" << endl;
	cout << "30x + 5x - 8( x + 3)/2 + (4x - (6y -2x))" << endl;
	cout << "Usando os valores de x = 4 e y = 6" << endl; 
	cout << endl;
	
	int x = 4;
	int y = 6;
	int salida = 0;

	salida = 30*x + 5*x - 8*(x + 3)/2 + (4*x - (6*y -2*x));

	cout << "O resultado foi: " << salida << endl;
}