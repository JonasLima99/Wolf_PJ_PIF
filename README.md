
# Wolf\_PJ\_PIF

# 🧠 Integrantes do Projeto

* Leonardo Felipe Demétrio Lins Nascimento
* Jonas de Lima Neto
* João Eduardo Monteiro Cavalcanti

---

# 📘 Disciplina

**Programação Imperativa e Funcional - 2025.1**

---

# 🏫 Instituição

**CESAR School**

---

# 💣 Nome do Jogo

**OneMine--**

---

# ⚙️ Como Compilar e Executar o Jogo

### ✅ Pré-requisitos

* Sistema operacional: **Linux** ou **macOS**
* Compilador: `gcc`
* Biblioteca: **CLI-lib** incluída no projeto (`src/cli-lib`)

### 🛠️ Compilação

Manualmente:

```bash
gcc -o campo-minado src/*.c -Iinclude
```

### ▶️ Execução

```bash
./campo-minado
```

---

# 💣 Campo Minado++

**Campo Minado++** é uma versão interativa do clássico jogo de lógica, criada em linguagem **C** com suporte à biblioteca **CLI-lib**. O jogo é executado no terminal e inclui recursos como **interface colorida**, **níveis de dificuldade**, e **sistema de pontuação**.

---

## 🎯 Objetivo

O jogador deve abrir todas as células que **não contêm minas** no campo, utilizando pistas numéricas sobre a quantidade de minas nas adjacências. Cuidado: abrir uma mina termina o jogo!

---

## 🔁 Regras e Interações

### 🎮 Comandos do Teclado

| Tecla   | Ação                         |
| ------- | ---------------------------- |
| `w`     | Mover cursor para cima       |
| `s`     | Mover cursor para baixo      |
| `a`     | Mover cursor para a esquerda |
| `d`     | Mover cursor para a direita  |
| `Enter` | Revelar célula               |
| `f`     | Marcar ou desmarcar bandeira |
| `q`     | Sair do jogo                 |

---

## 🧠 Níveis de Dificuldade

* **Fácil**: 8x8 com 10 minas
* **Médio**: 12x12 com 20 minas
* **Difícil**: 16x16 com 40 minas

O jogador escolhe o nível ao iniciar o jogo.

---

## 🏆 Sistema de Pontuação

A pontuação é baseada no número de células abertas corretamente. O tempo de jogo também pode influenciar no ranking final.

---

## ✨ Recursos Visuais

Aproveitando os recursos da CLI-lib, o jogo apresenta:

* Interface em cores para facilitar a leitura
* Destaques para minas, bandeiras e áreas seguras
* Animação simples de **"Game Over"** e **"Vitória!"**

---

