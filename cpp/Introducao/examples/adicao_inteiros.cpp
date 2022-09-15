// Programa que recebe dois numeros enteiros e retorna a soma
// adicao_inteiros.cpp
#include <iostream>
int main()
{
	int numero1 = 0; //primeiro enteiro definido como 0
	int numero2 = 0; //segundo enteiro definido como 0
	int adicao = 0;//suma definida como 0
	
	std::cout << "Insira o numero inteiro: ";//usuário digita o número
	std::cin >> numero1;//número inserido é definido na variável numero1
	
	std::cout << "Insira o numero inteiro: ";//usuário digita o número
	std::cin >> numero2;//número inserido é definido na variável numero2
	
	adicao = numero1 + numero2;//adicao dos números
	
	std::cout << "Adicao: " << adicao << std::endl;//imprime a suma
}