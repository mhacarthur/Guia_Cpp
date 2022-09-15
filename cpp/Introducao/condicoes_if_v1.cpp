// Comparação de dois numero inseridos pelo usuário
// condicoes_if.cpp
#include <iostream>

using std::cout; //Para usar diretamente cout
using std::cin; //Para usar diretamente cin
using std::endl; //Para usar diretamente endl

int main()
{
	int numero1 = 0; //É definido o primeiro número
	int numero2 = 0; //É definido o segundo número
	
	cout << "Digite dois numeros inteiros: ";//Ingresar numeros 
	cin >> numero1 >> numero2; //Atualizar os valores dos numeros
	
	if ( numero1 == numero2 )//Numeros iguais
		cout << numero1 << " == " << numero2 << endl;
	if ( numero1 != numero2 )//Numeros diferentes
		cout << numero1 << " != " << numero2 << endl;
	if ( numero1 < numero2 )//Numero 1 menor que Numero 2
		cout << numero1 << " < " << numero2 << endl;
	if ( numero1 > numero2 )//Numero 1 maior que Numero 2
		cout << numero1 << " > " << numero2 << endl;
}