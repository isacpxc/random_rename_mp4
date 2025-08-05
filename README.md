# Organizador e Renomeador de MP3

Um script simples em linguagem C que varre o diretório atual em busca de arquivos `.mp3`, os renomeia com um nome aleatório e os move para uma nova pasta chamada `new`.

## 📜 Sobre o Projeto

Este programa foi criado para automatizar a tarefa de organizar arquivos de música. Ao ser executado em uma pasta, ele realiza as seguintes ações:

1.  Cria um novo diretório chamado `new` na pasta atual.
2.  Verifica todos os arquivos no diretório atual para identificar quais possuem a extensão `.mp3`.
3.  Para cada arquivo `.mp3` encontrado, gera um novo nome aleatório no formato `[Letra][Número][Letra][Número].mp3` (ex: `A5B9.mp3`, `Z0F2.mp3`).
4.  Move o arquivo original para dentro da pasta `new` com seu novo nome aleatório.

## ✨ Funcionalidades

  - **Criação automática de diretório**: Cria a pasta de destino `new` se ela não existir.
  - **Detecção de MP3**: Identifica arquivos de música pela extensão `.mp3`.
  - **Renomeação aleatória**: Atribui um nome único e aleatório para evitar conflitos e anonimizar a coleção.
  - **Organização**: Move os arquivos renomeados para um subdiretório, limpando a pasta principal.

-----

## 🚀 Como Usar

Para utilizar este programa, você precisará de um compilador C instalado em seu sistema (como o **MinGW** no Windows).

### Pré-requisitos

  - Um compilador C (ex: GCC/MinGW).
  - Os arquivos `.mp3` que você deseja organizar.

### Compilação

1.  Salve o código-fonte com um nome como `organizador_mp3.c`.

2.  Abra um terminal (CMD ou PowerShell) na pasta onde você salvou o arquivo.

3.  Compile o programa com o seguinte comando:

    ```bash
    gcc organizador_mp3.c -o organizador.exe
    ```

### Execução

1.  Coloque o arquivo `organizador.exe` (gerado na compilação) na mesma pasta onde estão os seus arquivos `.mp3`.

2.  Execute o programa diretamente pelo terminal:

    ```bash
    .\organizador.exe
    ```

Após a execução, uma nova pasta chamada `new` será criada, e todos os arquivos `.mp3` originais serão movidos para lá com novos nomes.

-----

### Exemplo de Funcionamento

**Estrutura da pasta ANTES:**

```
/Minhas Musicas
|-- 📄 minha_banda_favorita.mp3
|-- 📄 musica_triste.mp3
|-- 📄 podcast_legal.mp3
|-- 📂 outra_pasta/
|-- 👾 organizador.exe
```

**Estrutura da pasta DEPOIS:**

```
/Minhas Musicas
|-- 📂 new/
|   |-- 📄 R8P1.mp3
|   |-- 📄 K3N9.mp3
|   |-- 📄 T0V5.mp3
|-- 📂 outra_pasta/
|-- 👾 organizador.exe
```

-----

## ⚠️ Atenção e Avisos Importantes

  - **BACKUP**: **Este script altera permanentemente o nome dos seus arquivos e os move.** É altamente recomendável que você faça um backup dos seus arquivos `.mp3` antes de executar o programa.
  - **IRREVERSIBILIDADE**: A renomeação é aleatória e o nome original não é salvo. O processo não pode ser desfeito automaticamente.
  - **COMPATIBILIDADE**: O programa foi escrito pensando no sistema operacional **Windows**, utilizando o comando `MKDIR` e o separador de caminho `\\`. Ele pode não funcionar corretamente em sistemas Linux ou macOS sem modificações.
  - **ESCOPO**: O script apenas varre o diretório onde é executado e não entra em subpastas.

## 📄 Licença

Este projeto é de código aberto e pode ser modificado e distribuído livremente.