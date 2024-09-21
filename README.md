# Calculadora em C

Este projeto implementa uma calculadora simples na linguagem C, capaz de realizar operações básicas como adição, subtração, multiplicação e divisão. A calculadora recebe três argumentos: dois números inteiros e um operador, realizando a operação desejada.

## Funcionalidades

- Adição: `+`
- Subtração: `-`
- Multiplicação: `x`
- Divisão: `/` (valida divisão por zero)

## Estrutura dos Arquivos

- `Makefile`: Responsável por compilar o projeto. Gera o executável `calculator`.
- `main.c`: Ponto de entrada da aplicação. Processa os argumentos da linha de comando e chama a função de cálculo.
- `calculate.c`: Contém as funções de cálculo para as operações de adição, subtração, multiplicação e divisão.
- `ft_atoi.c`: Converte uma string em um número inteiro.
- `ft_isspace.c`: Verifica se um caractere é um espaço em branco.
- `ft_putchar_fd.c`: Imprime um caractere no arquivo especificado.
- `ft_putnbr_fd.c`: Imprime um número no arquivo especificado.
- `ft_putstr_fd.c`: Imprime uma string no arquivo especificado.
- `ft_strlen.c`: Calcula o comprimento de uma string.
- `calc.h`: Cabeçalho do projeto contendo as declarações de funções e includes necessários.

## Como Usar

1. Clone o repositório:
   ```bash
   git clone https://github.com/SpukoBR/c_calculator.git
   ```
2. Compile o projeto:
   ```bash
   make
   ```
3. Execute a calculadora:
   ```bash
   ./calculator <número1> <operador> <número2>
   ```
   Exemplo:
   ```bash
   ./calculator 5 + 3
   ```
   Resultado:
   ```
   8
   ```

## Erros Tratados

- Divisão por zero: exibe uma mensagem de erro ao tentar dividir por zero.
- Operador inválido: exibe uma mensagem de erro se um operador inválido for passado.
- Argumentos inválidos: exibe uma mensagem de uso correto se o número de argumentos for diferente de 3.

## Limpeza

Para limpar os arquivos objetos e o executável, execute:

```bash
make fclean
```
