
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(){

	cout << endl;
	cout << "O Codigo resolve a seguente operacao combinada" << endl;
	cout << "30x + 5x - 8( x + 3)/2 + (4x - (6y -2x))" << endl;
	cout << "Usando valores ingressados pelo usuario" << endl; 
	cout << "Com 6 < x < 10 e 1 < y < 4" << endl; 
	cout << endl;

	int x = 0;
	int y = 0;
	int salida = 0;

	cout << "Ingresse o valor de x: ";
	cin >> x;

	if(x < 6 || x > 10){
		cout << "ERROR: o intervalo de x tem que ser: 6 < x < 10" << endl;
		cout << endl;
		exit(EXIT_SUCCESS);
	}

	cout << "Ingresse o valor de y: ";
	cin >> y;

	if(y < 1 || y > 4){
		cout << "ERROR: o intervalo de y tem que ser: 1 < x < 4" << endl;
		cout << endl;
		exit(EXIT_SUCCESS);
	}	
	
	salida = 30*x + 5*x - 8*(x + 3)/2 + (4*x - (6*y -2*x));

	cout << "O resultado foi: " << salida << endl;

}