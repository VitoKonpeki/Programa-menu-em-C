# Programa Menu em C

Projeto desenvolvido em **linguagem C** que apresenta um **menu interativo no terminal** para realizar cálculos matemáticos e conversões de unidades.

O programa permite ao usuário escolher entre diferentes operações organizadas em submenus, incluindo:

- cálculo de **áreas de figuras planas**
- cálculo de **volumes de sólidos geométricos**
- **conversão de unidades de medida**

O objetivo do projeto é praticar conceitos fundamentais da linguagem C, como **funções, estruturas de controle, menus interativos e organização de código**.

---

# Funcionalidades

## 1️ Cálculo de áreas de figuras planas

O programa permite calcular a área das seguintes figuras:

- Círculo
- Losango
- Paralelogramo
- Trapézio
- Triângulo

- Equilátero
- Isósceles
- Escaleno
- Quadrado

Além do cálculo, o programa também exibe **representações simples em ASCII** de alguns triângulos.

---

## 2️ Cálculo de volume de sólidos geométricos

É possível calcular o volume de:

- Esfera
- Cone circular
- Cilindro
- Paralelepípedo

---

## 3️⃣ Conversão de unidades

O sistema também permite realizar diversas conversões:

- Metros → Jardas
- Jardas → Metros
- Centímetros cúbicos → Polegadas cúbicas
- Polegadas cúbicas → Centímetros cúbicos
- Litros → Galões
- Galões → Litros
- Quilogramas → Libras
- Libras → Quilogramas

---

# ⚙️ Como o programa funciona

O programa utiliza um **menu principal** com três módulos principais:

1. Áreas de figuras planas
2. Volume de sólidos geométricos
3. Conversão de medidas

Cada módulo possui **submenus específicos**, permitindo que o usuário escolha a operação desejada.

A navegação acontece através de **entrada numérica via terminal**.

Também há tratamento para **entrada inválida**, evitando que o programa quebre caso o usuário digite valores incorretos.

---

Estrutura do código:

O projeto foi organizado utilizando **funções separadas para cada cálculo**, facilitando manutenção e leitura do código.

Exemplos de funções implementadas:

- `circulo()` -> calcula área do círculo
- `losangulo()` -> calcula área do losango
- `paralelogramo()` -> calcula área do paralelogramo
- `trapezio()` -> calcula área do trapézio
- `tri_equi()` -> área do triângulo equilátero
- `esf()` -> volume da esfera
- `cone()` -> volume do cone
- `cilindro()` -> volume do cilindro

Também existem funções auxiliares como:

- `linha()` → desenha linhas decorativas no terminal
- `limparBufferEntrada()` → evita problemas com leitura de dados
- funções de desenho em **ASCII art**

---

Tecnologias utilizadas

- Linguagem **C**
- Compilação via **GCC ou compiladores compatíveis**
- Interface baseada em **terminal/console**

---

Como compilar e executar:

Compilar

gcc menu_programa.c -o programa


### Executar

./programa

No Windows:

programa.exe

---

Conceitos de programação aplicados

Este projeto utiliza diversos conceitos fundamentais de programação em C:

- Funções
- Estruturas condicionais (`if` / `else`)
- Estrutura `switch`
- Estruturas de repetição (`do while`)
- Entrada e saída de dados (`scanf` / `printf`)
- Organização de código em módulos
- Manipulação de menus no terminal

---

Objetivo do projeto:

Este projeto foi desenvolvido como **atividade acadêmica** para praticar:

- lógica de programação
- organização de código
- construção de programas interativos no terminal
- aplicação de fórmulas matemáticas em programação

---

Possíveis melhorias futuras:

- melhorar validação de entrada
- criar interface gráfica
- separar código em múltiplos arquivos (`.h` e `.c`)
- adicionar mais figuras geométricas
- adicionar testes automatizados

---

Autor:
Projeto desenvolvido por *Vitor Henrique de Sousa* como exercício acadêmico de programação em C.
