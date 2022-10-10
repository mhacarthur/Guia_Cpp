Nesta guia se apresenta uma rápida introdução na programação em **C++**. Se apresentaram diferentes exemplos introdutórios para compreender o desenho básico de um programa. Todos os exemplos apresentados nesta secção se encontram conteúdos na pasta `main/Introducao/examples`.

## Primeiro Programa em C++
Como ponto de início se apresenta um programa que simplesmente imprime uma mensagem no terminal, para este exemplo "Hello World". O arquivo é nomeado como *hi_world.cpp*.
```c
// Programa para imprimir uma linha de texto simples
// hi_world.cpp
#include <iostream> // Permite imprimir dados na tela

int main()// A função main indica o início do programa
{
	std::cout << "Hello World!!" << std::endl;
	return 0;
} // final da função main
```
uma vez que o programa é compilado e executado gera a seguente saída:
```console
Hello World!!
```
Para um melhor entendimento do código anterior serão  descritas as linhas mais relevantes.

**Observação**
Se deseja compilar o programa manualmente em uma terminal, pode usar o compilador **g++**,como a continuação:
```console
g++ hi_world.cpp
```
E para executar o arquivo **a.out** na terminal de Linux:
```console
./a.out
```
Ou para Windows, executando diretamente o arquivo gerado **a.exe** ou no cmd:
```console
a.exe
```
Caso deseje modificar o arquivo seja criado com um nome especifico pode usar:
```console
g++ hi_world.cpp -o hi_world
```

#### Diretivas de pré-processamento
As diretivas de pré-processamento são tarefas que se realizam antes que o programa seja compilado, por isso deve o seu nome. No código anterior foi indicada a linha:
```c
#include <iostream>
```
Esta linha indica que deve-se incluir no programa fluxos de entrada e saída, é dizer que que se mostrara informação na tela o que receba informação desde  o teclado, através de entradas e saídas ao estilo **C++**. 
#### Comentários e espaços em branco
As linhas que iniciam com os caracteres // serão ignoradas pelo compilador, além disso os espaços em branco são ignorados pelo compilador.
#### A função `main()`
```c
int main()
return 0;
```
Indica que a execução do programa inicia na seguente linha, onde os parênteses depois de `main()` representa uma função. Um programa em **C++** normalmente se encontra composto por funções e classes (que se apresentara mais na frente). A Palavras-chave `int` na esquerda de `main()` indica que a saída da função será um valor inteiro. Uma Palavras-chave em **C++**, são palavras reservadas para usos específicos.
Finalmente o `return 0` é utilizado para sair o terminar a função.
#### A instrução de saída `cout`
```c
std::cout << "Hello World!!" << std::endl;
```
Isto indica que deve-se realizar a ação de imprimir os caracteres dentro das aspas (""). O conteúdo dentro das aspas são denominados como uma cadeia de caracteres ou string. O compilador não ignora os espaços brancos dentro da cadeia de caracteres.
Portanto a linha completa`cout << "Hello World!!" << endl;`  é conhecido como instrução. a maioria das instruções em **C++** termina em `;`.  Não colocar o `;` ao final de uma instrução é um **erro de sintaxe**, isto significa que não se respeito as regras específicas do linguagem da programação.
#### O espaço `std`
A instrução `std::` na esquerda do `cout` é requerido quando são usados nomes estriados de uma diretiva de pré-processamento, neste caso `#include <iostream>`. a notação `std::cout` indica que é usado o nome `cout` que pertence ao espaço `std`, o `cout` representa o string de saída (dados impressos na tela). Enquanto o `std::endl` finaliza a linha.

## Modificando o Programa C++
Agora serão apresentados diferentes exemplos de como modificar o programa original.
#### Gerar uma linha de texto com varias instruções
Para isto vai se imprimir a frase "Hello World, my name is Gisella. Hi everybody". Esta cadeia de caracteres será criada com duas instruções.
```c
// Programa para imprimir uma linha de texto simples
// hi_world_name_v1.cpp
#include <iostream> // Permite imprimir dados na tela

int main()// A função main indica o início do programa
{
	std::cout << "Hello World, ";
	std::cout << "my name is Gisella. ";
	std::cout << "Hi everybody";
	return 0;
} // final da função main
```
No programa anterior, como na linha `std::cout << "Hello World!!";` não se indicou o final da linha, no momento de continuar com a seguente instrução `std::cout << "my name is Gisella";` e logo com  `std::cout << "Hi everybody";`, o **C++** imprimiu todas as cadeias de caracteres na mesma linha, sendo:
```console
Hello World, my name is Gisella. Hi everybody
```
#### Varias linhas de texto com diferentes instruções
No caso de serem desejadas linhas diferentes para cada cadeia de caracteres, as seguintes instruções podem ser usadas:
```c
// Programa para imprimir uma linha de texto simples
// hi_world_name_v2.cpp
#include <iostream> // Permite imprimir dados na tela

int main()// A função main indica o início do programa
{
	std::cout << "Hello World, " << std::endl;
	std::cout << "my name is Gisella. " << std::endl;
	std::cout << "Hi everybody" << std::endl;
	return 0;
} // final da função main
```
Gerando o seguente:
```console
Hello World, 
my name is Gisella.
Hi everybody
```

#### Varias linhas de texto com só uma instrução
Como pode ser visto no exemplo anterior, para cada linha de texto foi utilizada uma instrução. No entanto, se muitas linhas forem desejadas, esse formato se tornará tedioso. Para isso você pode usar caracteres de nova linha.
```c
// Programa para imprimir uma linha de texto simples
// hi_world_name_v3.cpp
#include <iostream> // Permite imprimir dados na tela

int main()// A função main indica o início do programa
{
	std::cout << "Hello World,\nmy name is Gisella.\nHi everybody";
	return 0;
} // final da função main
```
Gerando a mesma saída do exemplo anterior, mas com apenas uma linha de instruções.
```console
Hello World, 
my name is Gisella.
Hi everybody
```
## Programa Básico
O programa a seguir recebe dois inteiros inseridos pelo usuário e retorna a adição de ambos. Começamos definindo dois inteiros iguais a 0. Quando o usuário digitar os inteiros, eles substituirão os valores iniciais. Ao final do código a adição será obtida e finalmente exibida na tela.
```c
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
```
Uma vez que o código é compilado e executado, o seguinte resultado é obtido:
```console
Insira o numero inteiro: 5
Insira o numero inteiro: 6
Adicao: 11
```
#### Aritmética em C++
Os operadores aritméticos **C++** são apresentados na tabela abaixo. Ao diferença da álgebra, para multiplicação utiliza-se o asterisco, enquanto para obter o resto de uma divisão utiliza-se o símbolo de porcentagem.

|Nome da Operação|Operador Aritmético|  Expressão Algébrica|
|:----------:|:-------------:|:------:|
|Adição| + | a + b |
|Resta|-|a - b|
|Multiplicação|*|a * b|
|Divisão|/|a / b|
|Módulo ou resíduo|%|a % b|

#### Hierarquia das Operações
C++ aplica as operações combinadas seguindo a sequência hierárquica seguindo as regras de precedência dos operadores. Estas regras pode-se resumir como:
 1. Os operadores contidos no par de *parênteses* são avaliados primeiro. Isso significa que os parênteses têm a hierarquia mais alta. No caso de parênteses dentro de outros, os mais internos são avaliados primeiro.
 2. Os operadores de multiplicação, divisão e módulo são aplicados a seguir. Esses operadores são computados da esquerda para a direita e possuem o mesmo nível de hierarquia.
 3. E por último a adição e subtração. Se várias dessas operações estiverem presentes, o cálculo começa da esquerda para a direita. Apresentando ambos o mesmo valor hierárquico.
#### Operadores de comparação e condicionais
A condição `if` permite que um programa execute uma determinada ação com base na verdade ou falsidade de uma determinada condição. Se a condição for verdadeira, uma instrução encontrada no corpo de `if` é executada, se for falsa, a instrução não é executada. As condições de A são normalmente usadas com Operadores relacionais, conforme mostrado na tabela.
|Operadores relacionais|  C++|Exemplo|Significado|
|:----------:|:-------------:|:------:|:------:|
|>|> |a > b |a é maior que b
|<|< |a < b |a é menor que b
|≥|>=|a >= b|a é maior ou igual que b
|≤|<=|a <= b|a é menor ou igual que b
|=|==|a == b|a é igual a b
|≠|!=|a != b|a é diferente de b

O exemplo abaixo usa quatro condições `if` para comparar dois números inseridos pelo usuário e, assim, verificar qual condição foi atendida.
```c
// Comparação de dois numero inseridos pelo usuário
// condicoes_if_v1.cpp
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
```
Para os dois números inseridos, eles passam por cada uma das condições, sendo que podem apresentar mais de uma delas:
```console
Digite dois numeros inteiros: 50 63
50 != 63
50 < 63
```
No entanto, no código anterior os dois inteiros são inseridos na mesma linha, uma modificação simples pode ser feita para definir uma entrada para cada inteiro. Além de mostrar em texto a comparação entre os dois números, mas principalmente usando só uma função `if`:

```c
// Comparação de dois numero inseridos pelo usuário
// condicoes_if_v2.cpp
#include  <iostream>

using std::cout;
using std::cin;
using std::endl;

int  main(){
	int numero1 =  0;
	int numero2 =  0;
	
	cout <<  "Digite o primeiro numero: ";
	cin >> numero1;

	cout <<  "Digite o segundo numero: ";
	cin >> numero2;

	if (numero1 > numero2){
		cout <<  "O primeiro numero é maior que o segundo"  <<  endl;
	}
	else  if (numero1 < numero2){
		cout <<  "O segundo numero é maior que o primeiro"  <<  endl;
	}
	else{
		cout <<  "Os numeros são iguais"  <<  endl;
	}
}
```
gerando a seguente saída:
```console
Digite o primeiro numero: 8
Digite o segundo numero: 6
O primeiro numero é maior que o segundo
```

## Exercícios Resolvidos (ER)
Os Códigos dos exercícios resolvidos se encontram no diretório `main/Introducao/exercies`, estes são nomeados com as siglas ER mais o número do exercício.

 1. Criar um programa que peça um número e imprima o número ingressado. 

 2. Ingresse um numero inteiro e determine se e par o impar.
 
 3. Criar um código com as seguentes indicações:
 
	 a. Imprimir na tela que o código computa o produto de três inteiros
	 
	 b. Declarar as variáveis `x`, `y` e `z` com o tipo `int`.
	 
	 c. O usuário deve inserir os valores para `x`, `y` e `z`.
	 
	 d. Computar o produto das três variáveis e imprimir o resultado com `O resultado foi: `.
	 
 5. Resolver a seguente operação combinada, com três códigos diferentes:
	 `30x + 5x - 8(x+3)/2 + (4x - (6y - 2x))`
	 
	 a. Para valores de `x=4` e `y=6`
	 
	 b. Para valores ingressados pelo usuário.
	 
	 c. Para os intervalos de `6 < x < 10` e `1 < y < 4` caso contrario terminar o código.
	 
 6. Crie um programa para computar o promédio ponderado de 4 notas, onde as notas só podem ter valores entre 0 e 20, o programa não pode aceitar valores fora deste intervalo. Os pesos das matérias são: `M1=0.25`,  `M2=0.15`, `M3=0.35` e `M4=0.25`.