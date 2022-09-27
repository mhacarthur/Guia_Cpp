**Code::Blocks** é um Ambiente de desenvolvimento integrado ou IDE nas siglas em inglês de *Integrated Development Environment*. O **Code::Blocks** é orientado principalmente às linguagens **C** e **C++**, mas também suporta outras linguagens de programação como **Python**, **Matlab**, **Pascal**, entre outros.

**Code::Blocks** é gratuito e possui diferentes complementos para agregar diferentes tipos de funcionalidade como por exemplo compilação e depuração de eventos. O **Code::Blocks** pode-se obter desde seu website oficial o qual proporciona diferentes informações.

 1. Website: [https://www.codeblocks.org/](https://www.codeblocks.org/)
 2. Manual de Usuário: [https://www.codeblocks.org/user-manual/](https://www.codeblocks.org/user-manual/)
 3. Descarga de Code Blocks: [https://www.codeblocks.org/downloads/](https://www.codeblocks.org/downloads/)
 4. Wiki: [https://wiki.codeblocks.org/index.php/Main_Page](https://wiki.codeblocks.org/index.php/Main_Page)
 5. Foro: [https://forums.codeblocks.org/](https://forums.codeblocks.org/)
    
## Descarga e Instalação
**Code::Blocks** pode ser usado em **Windows**, **linux** e **macOS**, os arquivos binários podem-se encontrar em [http://www.codeblocks.org/downloads/binaries/](http://www.codeblocks.org/downloads/binaries/). A última versão de **Code::Blocks** no momento da criação desta guia é a 20.03, esta proporciona a versão padrão de 64 bits, mas também pode-se encontrar a versão de 32 bits. Para uma maior descrição da versão ingresar a [http://www.codeblocks.org/changelogs/20.03/](http://www.codeblocks.org/changelogs/20.03/).

### Microsoft Windows
O arquivo padrão para windows é CodeBlocks-20.03-setup.exe, o qual inclui o **Code::Blocks** e seus *plugins* ou complementos. Enquanto o codeblocks-20.03mingw-setup.exe inclui os compiladores de **gcc**, **g++** e **gfortran**. Uma vez descarregado o arquivo codeblocks-20.03mingw-32bit-setup.exe este pode ser executado. O primeiro passo é simplesmente continuar com a benvinda do instalador de **Code::Blocks**, para assim aceitar os termos da licença.

![figura01](https://github.com/mhacarthur/Guia_Cpp/blob/main/main/CodeBlocks/fig/fig01.png?raw=true)

A continuação pode-se escolher a quantidade de *plugins* a instalar, desde o *Full* (todos os *plugins*), *Standard* (só os *plugins* e ferramentas principais), Minimal (só os *plugins* importantes), Editor (só o editor) e *Custom* (a escolha do usuário). Definido o tipo de instalação deve-se indicar o endereço de instalação e continuar com a instalação.

![figura02](https://github.com/mhacarthur/Guia_Cpp/blob/main/main/CodeBlocks/fig/fig02.png?raw=true)

Quando o processo de instalação terminar, o **Code::Blocks** se encontra pronto para o uso. Lembrado que a pasta de destino foi `C:\Program Files\CodeBlocks`

![figura03](https://github.com/mhacarthur/Guia_Cpp/blob/main/main/CodeBlocks/fig/fig03.png?raw=true)

### Linux
Os arquivos de instalação para as diferentes distribuições de Linux se encontram comprimidas nos formatos `tar`, `tar.xz` or `tar.bz2`. Uma vez descomprimidos, se encontram todos os pacotes necessários para a instalação em arquivos `.rpm` ou `.deb` (para distribuições baseadas em Debian). Ou também pode-se instalar por linha de comandos.

```console
sudo add-apt-repository universe
sudo apt update
sudo apt install codeblocks 
sudo apt install codeblocks-contrib
```
A primeira linha é para agregar o nov repositório, a segunda atualiza os pacotes, enquanto a terceira descarrega e instala o **Code::Blocks** e finalmente a quarta linha instala plugins adicionais.

## Configurando o Compilador
Como foi indicado o **Code::Blocks** apresenta uma grande versatilidade para usar diferentes linguagens de programação, por isto que antes de iniciar com a criação dos programas (scripts) deve-se escolher que compilador será usado para o caso de **C++**.  Na barra de ferramentas pulse o botão `Settings -> Compiler` para assim selecionar o compilador. Para este caso o compilador selecionado é **GNU GCC Compiler**.

![figura04](https://github.com/mhacarthur/Guia_Cpp/blob/main/main/CodeBlocks/fig/fig04.png?raw=true)

Por último na aba **Toolchain executables** selecionar o compilador **gcc** ou **g++** para cada uma das opções de compilador.

![figura05](https://github.com/mhacarthur/Guia_Cpp/blob/main/main/CodeBlocks/fig/fig05.png?raw=true)

## Compilando o Teste
O **Code::Blocks** permite criar, editar e compilar códigos em **C++**. Uma vez iniciado o **Code::Blocks**, pulse o ícone `New  ->  Empty file`, com o qual pode-se criar um novo arquivo para código de **C++**.

![figura06](https://github.com/mhacarthur/Guia_Cpp/blob/main/main/CodeBlocks/fig/fig06.png?raw=true)

Criado o novo arquivo a primeira ação recomendável é guardá-lo, para isso deve-se pulsar na barra de opções o seguente `File  ->  Save File` para finalmente decidir o nome do arquivo e o endereço. No momento de guardar o arquivo, pode-se escolher o tipo de linguagem a utilizar (extensão do arquivo), por defeito o formato do aquivo é `.cpp` (**C++**). Com a extensão `.cpp`, o código torna-se colorido para assim facilitar a edição e legibilidade como a indicação do compilador. Se não se especifica diretamente a extensão **C++**, se atribui de forma automática a extensão **C**.

![figura07](https://github.com/mhacarthur/Guia_Cpp/blob/main/main/CodeBlocks/fig/fig07.png?raw=true)

Como teste foi criado um código simples chamado `hi_world.cpp`, toda modificação não guardada sobre o código é indicada com um asterisco (`*`) como se mostra na figura, para guardar as alterações pode-se usar o `ícone save`  que se encontra na barra de ferramentas ou também a combinação de teclas (`ctrl + s`). Uma vez que foram guardadas as alterações o símbolo * desaparece.

![figura08](https://github.com/mhacarthur/Guia_Cpp/blob/main/main/CodeBlocks/fig/fig08.png?raw=true)

Uma vez que o código se encontra pronto pode-se compilar e executar para obter a saída. Na barra de ferramentas existem três botões criados para esta tarefa que são: `Build`, `Run` e `Build and Run`. O `Build` (`Ctrl+F9`) cria o executável pronto para usar, o `Run` (`Ctrl+F10`) executa tal arquivo e `Build and Run` (`F9`) faz as duas ordens em conjunto (Primeiro Compila e logo executa).

![figura09](https://github.com/mhacarthur/Guia_Cpp/blob/main/main/CodeBlocks/fig/fig09.png?raw=true)

Quando o código é compilado (`Build`), será criado um arquivo executável sem extensão (ou extensão `.out`) no **Linux** e um arquivo `.exe` no **Windows**. Enquanto a ordem `Run` abrirá uma console onde será executado o arquivo compilado. 

Para o caso do teste em **Linux** foram criados os arquivos `hi_world` e `hi_world.out`. Onde pode-se executar o arquivo `hi_world` desde uma consola com a ordem `./hi_world.out`. Similar é o caso de **Windows** onde para executar o arquivo compilado `.exe` desde uma consola somente precisa colocar o nome de arquivo `hi_world` o simplesmente executando ele diretamente.

## Criação de Projetos
Será criado um projeto para os exemplos posteriores que serão usados no curso de introdução na programação de objetos em **C++**. Para criar o projeto selecione na barra de ferramentas `File -> New -> Project`. A continuação abrirá uma janela com `templates` para diferentes projetos. Das opções mostradas na janela, onde `Empty Project` será a utilizada. Seguido se abrirá outra janela para confirmação da criação do projeto, pode-se marcar a caixa para não mostrar esta janela na próxima criação de projeto.

![figura10](https://github.com/mhacarthur/Guia_Cpp/blob/main/main/CodeBlocks/fig/fig10.png?raw=true)
O próximo passo é escolher a linguagem de programação, o qual será **C++**.  Logo é necessário nomear o projeto e definir o endereço onde será armazenado. Neste caso o nome do projeto é `POO_cpp`. Finalmente é decidido o compilador a usar, e como foi mencionado o compilador é o `GNU GCC Compiler`, com isso o projeto será criado.

![figura11](https://github.com/mhacarthur/Guia_Cpp/blob/main/main/CodeBlocks/fig/fig11.png?raw=true)
O manual oficial de Code::Blocks (em inglês) pode-se encontrar no seguente link: [https://www.codeblocks.org/docs/manual_codeblocks_en.pdf](https://www.codeblocks.org/docs/manual_codeblocks_en.pdf).
