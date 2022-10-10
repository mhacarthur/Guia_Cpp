#include <iostream>
#include <string> //para usar a classe string de C++
using namespace std;
class LivroQualificacoes
{
public:
	void mostrarMensaje( string nomeMateria ) const
	{
		cout << "Bem-vindo ao Livro de Qualificacoes\n" << nomeMateria << "!" << endl;
	}
};
int main()
{
string nomeMateria;
LivroQualificacoes miLivroQualificacoes;
cout << "Introduza nome da materia:" << endl;
getline( cin, nomeMateria );
cout << endl;
miLivroQualificacoes.mostrarMensaje( nomeMateria );
}