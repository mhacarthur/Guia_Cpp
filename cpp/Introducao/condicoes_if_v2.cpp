// Comparação de dois numero inseridos pelo usuário
// condicoes_if_v2.cpp
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int numero1 = 0;
    int numero2 = 0;

    cout << "Digite o primeiro numero: ";
    cin >> numero1;

    cout << "Digite o segundo numero: ";
    cin >> numero2;

    if (numero1 > numero2)
    {
        cout << "O primeiro numero é maior que o segundo" << endl;
    }
    else if (numero1 < numero2)
    {
        cout << "O segundo numero é maior que o primeiro" << endl;
    }
    else
    {
        cout << "Os numeros são iguais" << endl;
    }
}