
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(){

	cout << endl;
	cout << "Promedio ponderado de quatro materias:" << endl;
	cout << "As notas devem-se encontrar entre 0 e 20" << endl;
	cout << endl;

	int matematica = 0;
	int fisica = 0;
	int geometria = 0;
	int aritmetica = 0;
	int nota_final = 0;

	cout << "Insira a nota de matematica: ";
	cin >> matematica;

	if(matematica < 0 || matematica > 20){
		cout << "ERROR: a nota deve estar entre 0 e 20" << endl;
		cout << endl;
		exit(EXIT_SUCCESS);
	}

	cout << "Insira a nota de fisica: ";
	cin >> fisica;

	if(fisica < 0 || fisica > 20){
		cout << "ERROR: a nota deve estar entre 0 e 20" << endl;
		cout << endl;
		exit(EXIT_SUCCESS);
	}

	cout << "Insira a nota de geometria: ";
	cin >> geometria;

	if(geometria < 0 || geometria > 20){
		cout << "ERROR: a nota deve estar entre 0 e 20" << endl;
		cout << endl;
		exit(EXIT_SUCCESS);
	}

	cout << "Insira a nota de aritmetica: ";
	cin >> aritmetica;

	if(aritmetica < 0 || aritmetica > 20){
		cout << "ERROR: a nota deve estar entre 0 e 20" << endl;
		cout << endl;
		exit(EXIT_SUCCESS);
	}	

	nota_final = 0.25*matematica + 0.15*fisica + 0.35*geometria + 0.25*aritmetica;

	if(nota_final >= 11){
		cout << endl;
		cout << "Nota final foi: " << nota_final << endl;
		cout << "APROVADO " << nota_final << endl;	
	}
	else{
		cout << endl;
		cout << "Nota final foi: " << nota_final << endl;
		cout << "REPROVADO " << endl;		
	}


	



}