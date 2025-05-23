
# MINES - VÍRUS

## 1. Integrantes do Projeto

- João Eduardo Monteiro Cavalcanti - [@joaoduda0](https://github.com/joaoduda0)  
- Jonas de Lima Neto - [@jonaslima99](https://github.com/JonasLima99)  
- Leonardo Felipe Demétrio Lins Nascimento - [@leolins77](https://github.com/leolins77)  

## 2. Disciplina

**Programação Imperativa e Funcional - 2025.1**

## 3. Instituição de Ensino

**CESAR School**

## 4. Nome do Jogo

**MINES - VÍRUS**  
*Limpe o laboratório... se conseguir sair vivo!*

## 5. Como Compilar e Executar

### Requisitos:
- Sistema operacional: **Linux** (recomendado) ou **macOS**
- GCC instalado

### Passo a passo:

1. Clonar o repositório do GitHub.
2. Copiar a pasta completa do jogo: `Wolf_PJ_PIF`.
3. Colar a pasta em algum diretório do Ubuntu.
4. Abrir o **Terminal** (Ubuntu).
5. Navegar até o diretório da pasta com:
   ```bash
   cd caminho/para/Wolf_PJ_PIF
   ```
6. Compilar o jogo com:
   ```bash
   gcc src/*.c -Iinclude -o build/mines-virus
   ```
7. Executar o jogo com:
   ```bash
   ./build/mines-virus
   ```

Pronto! O jogo será executado diretamente no seu terminal.

## 6. Descrição do Jogo

**MINES - VÍRUS** é um jogo de estratégia e sorte baseado no clássico campo minado, ambientado em um laboratório virtual contaminado por vírus perigosos.

### Objetivo
Revelar células seguras no campo de 4x4 sem cair em uma célula infectada (X). O jogador pode decidir parar e sacar os pontos a qualquer momento.

### Controles
- **W**: mover para cima
- **A**: mover para esquerda
- **S**: mover para baixo
- **D**: mover para direita
- **ENTER**: revelar a célula atual
- **Q**: sacar pontos e encerrar a rodada

### Regras
- Cada célula segura revelada dá pontos.
- Se o jogador revelar uma célula infectada (X), o jogo termina e ele perde todos os pontos.
- Se ele sacar a tempo, a pontuação é salva no arquivo `ranking.txt`.

Boa sorte, e cuidado com os vírus! 🧫💀
