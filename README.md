# Jogo de Adivinhação de Números (Linguagem C)

Este é um jogo interativo para terminal desenvolvido em C, onde o usuário tenta adivinhar um número secreto gerado aleatoriamente pelo computador. O projeto conta com diferentes níveis de dificuldade, sistema de pontuação baseado na precisão dos palpites e artes visuais em ASCII.

## 🛠️ Tecnologias e Conceitos Utilizados
* **Linguagem:** C
* **Bibliotecas Clássicas:** `<stdio.h>`, `<stdlib.h>`, `<time.h>` e `<locale.h>` (para suporte a acentuação em português).
* **Estruturas de Controle:** Loops (`for`), condicionais (`if/else`) e controle de fluxo (`switch/case`).
* **Lógica Avançada:** Geração de números pseudo-aleatórios com `srand(time(0))` baseada no relógio da máquina e cálculo dinâmico de pontuação.

## 🕹️ Como Funciona o Jogo?
1. O jogador escolhe um nível de dificuldade:
   * **Fácil:** 20 tentativas
   * **Médio:** 15 tentativas
   * **Difícil:** 6 tentativas
2. A cada palpite incorreto, o sistema informa se o número secreto é maior ou menor que o chute atual.
3. O jogador inicia com **1000 pontos**, e a cada erro, perde uma pontuação proporcional à distância do seu chute em relação ao número correto.

## 🚀 Como Compilar e Executar

Caso queira testar o projeto localmente:

1. Certifique-se de ter um compilador C instalado (como o GCC).
2. Clone ou baixe o arquivo principal do código.
3. Abra o terminal na pasta do arquivo e compile:
   ```bash
   gcc jogo.c -o jogo_adivinhacao
