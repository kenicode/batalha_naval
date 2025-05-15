# batalha_naval
Trabalho Estácio - Batalha Naval

Claro! Aqui está uma descrição mais detalhada e completa para o seu repositório no GitHub. Ela pode ser usada diretamente como um `README.md`:

---

# 🧭 Batalha Naval em Linguagem C

Este repositório apresenta uma simulação básica de posicionamento de navios em um campo de batalha, utilizando a linguagem C. A proposta é criar uma matriz 10x10 representando o oceano e posicionar diferentes tipos de navios em coordenadas específicas, explorando estruturas de controle, arrays bidimensionais e conceitos fundamentais de lógica de programação.

---

## 📌 Objetivo do Projeto

Demonstrar de forma prática como utilizar **arrays bidimensionais** em C, realizando a alocação e visualização de elementos em um tabuleiro que simula o clássico jogo **Batalha Naval**. Embora este código não contenha interação com o usuário, ele é um excelente exemplo didático para iniciantes que desejam entender:

* A manipulação de matrizes.
* A organização de dados em estruturas visuais (como um grid).
* O uso de laços de repetição (`for`) para construção de padrões.

---

## ⚙️ Como Funciona

O programa cria uma matriz 10x10 chamada `batalha`, onde cada célula é inicialmente preenchida com o valor `0`, representando o mar. Em seguida, quatro navios são posicionados com o valor `3` para indicar a presença de um barco:

1. **Barco Vertical**
   Ocupa a coluna 2 (índice `[i][2]`) da linha 5 até a linha 7 (inclusive).

2. **Barco Horizontal**
   Ocupa a linha 5 (índice `[5][i]`) da coluna 5 até a coluna 7 (inclusive).

3. **Barco Diagonal Principal**
   Posicionado de `[1][1]` até `[3][3]`, formando uma diagonal principal.

4. **Barco Diagonal Secundária**
   Posicionado de `[0][9]` até `[2][7]`, formando uma diagonal secundária.

Após o posicionamento dos navios, o programa imprime o campo de batalha linha por linha, permitindo a visualização do resultado diretamente no terminal.

---

## 🖥️ Exemplo de Saída

```
0 0 0 0 0 0 0 0 0 3 
0 0 3 0 0 0 0 0 0 0 
0 0 0 3 0 0 0 0 0 0 
0 0 0 0 3 0 0 0 0 0 
0 0 0 0 0 0 0 0 0 0 
0 0 3 0 0 3 3 3 0 0 
0 0 3 0 0 0 0 0 0 0 
0 0 3 0 0 0 0 0 0 0 
0 0 0 0 0 0 0 0 0 0 
0 0 0 0 0 0 0 0 0 0 
```

---

## 🧪 Tecnologias Utilizadas

* Linguagem C (padrão C99)
* Compilador `gcc` (ou qualquer compatível)
* Terminal para execução

---

## 📁 Estrutura do Repositório

```
📦 batalha-naval-c
 ┣ 📄 batalha_naval.c     ← Arquivo principal com o código-fonte
 ┗ 📄 README.md            ← Este arquivo de documentação
```

---

## 🚀 Como Executar

1. Clone o repositório:

```bash
git clone https://github.com/seu-usuario/batalha-naval-c.git
cd batalha-naval-c
```

2. Compile o programa:

```bash
gcc batalha_naval.c -o batalha
```

3. Execute:

```bash
./batalha
```

---

## 📚 Possibilidades de Expansão

Este projeto pode ser expandido com diversas funcionalidades:

* Entrada de dados pelo usuário (ex: onde posicionar os navios).
* Detecção de colisões entre navios.
* Modo de jogo com dois jogadores.
* Implementação de ataques e contagem de acertos.
* Interface gráfica simples via terminal.

---

## 🧠 Ideal para quem está aprendendo

Este código é ideal para estudantes iniciantes na linguagem C e que desejam entender como trabalhar com matrizes e lógica de posicionamento. Ele pode ser usado como base para criar versões mais completas e interativas de jogos baseados em grid.

---

Se quiser, posso criar esse `README.md` formatado e gerar o arquivo completo para você colar diretamente no repositório. Deseja isso?

