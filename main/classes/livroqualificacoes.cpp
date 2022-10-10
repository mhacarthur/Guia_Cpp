#include <iostream>
using namespace std;

// Incia definição da classe
class LivroQualificacoes
{
public:
	void mostrarMensaje() const
	{
		cout << "Bem-vindo ao Livro de Qualificacoes" << endl;
	}
};
// Se inicia execução do programa
int main()
{
	LivroQualificacoes miLivroQualificacoes;//cria objeto
	miLivroQualificacoes.mostrarMensaje();//chama a função
}