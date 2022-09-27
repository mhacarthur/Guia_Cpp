Neste capitulo se aplicaram os conceitos básicos da programação orientada a objetos. No capitulo anterior todos os programas se executavam tarefas dentro da função `main`. Agora se aplicara a função `main` junto com uma o mais *classes*. Podemos compreender uma *classe* como uma coleção de variáveis com certos atributos ou características associadas a certas funções com as quais pode-se representar este conjunto de dados.

## Definição de uma Classe
Como exemplo será criada uma *classe* chamada `LivroQualificacoes`, esta *classe* representa um livro para ingressar as qualificações das provas dos estudantes. Como ponto inicial a *classe* simplesmente uma mensagem na tela de boas-vindas.

```c
// Definição da classe livroQualificacoes
// livroqualificacoes.cpp
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
```
```console
Bem-vindo ao Livro de Qualificacoes
```
Portanto a *classe* `LivroQualificacoes` possui a função `mostrarMensaje`. Foi criado um objeto chamado `miLivroQualificacoes`. Por convenção o nome de uma *classe* definida pelo usuário inicia com uma letra maiúscula. O corpo de uma *classe* se encontra definido entre `{}` e finalizando a definição com o `;`.
A linha com a palavra chave `public`, indica que a função a continuação se encontra disponível ao publico. Isto é que outras funções como por exemplo `main` pode chamá-la e também funções  de outras *classes*. Enquanto a palavra `void` indica o tipo de retorno de uma função, isto indica que a função não retornará dados. Para indicar que a função não modificara ao objeto se utiliza `const`. Uma vez criado o objeto `miLivroQualificacoes` o operado `.` significa que o objeto possui a função `mostrarMensaje`, chamando-a para iniciar sua tarefa. Os parênteses vazios indicam que a função não requer de dados adicionais para realizar sua tarefa.

## Definição de uma Função com um Parâmetro
No exemplo anterior a função não precisava de informação adicional, neste caso será definida uma função onde seja um valor adicional de entrada, isto é definido como `parametro`. Este valor é necessário para a função seja executada. Uma função proporciona `argumentos` para cada um dos `parametros` da função.
Continuando com o exemplo do `LivroQualificacoes`, agora é necessário ingressar o nome da matéria.

```c
// Definição da classe livroQualificacoes
// livroqualificacoes2.cpp
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
getline( cin, nombreDelCurso );
cout << endl;
miLibroCalificaciones.mostrarMensaje( nombreDelCurso );
}
```
```console
Bem-vindo ao Livro de Qualificacoes
Cpp Curso Básico de C++!
```
Como já foi usado na linha `cout << "Introduza nome da materia:" << endl;` pede ao usuário para digitar o nome do curso, enquanto o `getline` é usada para ler a entrada. Uma questão natural é porque não foi usada a linha `cin >> nombreDelCurso`, como nome da matéria foi usada o string "Curso Básico de C++" o qual se encontra composto por palavras separadas por um espaço em branco. Quando se usa o `cin`,  ele lê os caracteres até atingir o primeiro espaço em branco. Sendo assim só lera até `Cpp`, o restante devera ser lido com outras operação de entrada. Portanto o `getline( cin, nombreDelCurso );` lê todos os caracteres incluindo espaços em branco.

