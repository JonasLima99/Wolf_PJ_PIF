# Wolf_PJ_PIF

# 🧠 Integrantes do Projeto

- Leonardo Felipe Demétrio Lins Nascimento 
- Jonas de Lima Neto
- João Eduardo Monteiro Cavalcanti

---

# 📘 Disciplina

**Programação Imperativa e Funcional - 2025.1**

---

# 🏫 Instituição

**CESAR School**

---

# 🎮 Nome do Jogo

**Tetrimino++**

---

# ⚙️ Como Compilar e Executar o Jogo

### ✅ Pré-requisitos
- Sistema operacional: **Linux** ou **macOS**
- Compilador: `gcc`
- Biblioteca: **CLI-lib** incluída no projeto (`src/cli-lib`)


### 🛠️ Compilação
Manualmente:

No Terminal: gcc -o tetris src/*.c -Iinclude

▶️ Execução

./tetris

# 🎮 Tetrimino++

**Tetrimino++** é uma versão aprimorada do clássico Tetris, desenvolvida inteiramente em linguagem **C** com uso da biblioteca **CLI-lib**. O jogo é executado no terminal e traz inovações como **peças com poderes especiais**, **ranking com nome do jogador** e **efeitos visuais com texto e cores**.

---

## 🎯 Objetivo
O jogador deve posicionar corretamente as peças que caem do topo da tela para formar linhas horizontais completas e evitar que a pilha de blocos atinja o topo.

---

## 🔁 Regras e Interações

### 🎮 Comandos do Teclado
| Tecla | Ação                     |
|-------|--------------------------|
| `a`   | Mover peça para a esquerda |
| `d`   | Mover peça para a direita  |
| `w`   | Girar peça (sentido horário) |
| `s`   | Acelerar a queda da peça   |
| `q`   | Sair do jogo               |

### 💥 Peças Especiais
- **Explosiva**: destrói blocos ao redor ao ser fixada.
- **Coringa**: adapta sua forma à posição onde for fixada.
- **Congeladora**: pausa a queda de novas peças temporariamente.

Essas peças aparecem de forma aleatória e tornam cada partida única e desafiadora.

---

## 🏆 Ranking
Após o fim da partida, o jogador insere seu **nome**, e a pontuação é registrada em um arquivo local (`ranking.txt`). O ranking é exibido antes de cada nova partida.

---

## ✨ Efeitos Visuais
Utilizando a CLI-lib, o jogo apresenta efeitos como:
- Textos coloridos e piscantes
- Mensagens especiais ao completar linhas ou ativar peças especiais
- Animações simples no game over

---


