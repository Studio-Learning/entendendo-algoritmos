# Capítulo 1 (Introdução a algoritmos)
- **Pesquisa Binária** = Sua entrada é uma lista ordenada de elementos (array). 
    - Elimine metade dos números a cada tentativa!
    - Para uma lista de N números, a pesquisa binária precisa de  log n.

- **Relembrando Log** = Log é o oposto de exponencial.
    | Exponencial | Log | 
    |----------|:--------:|
    |10² = 100  | log10(100) = 2 |
    | 10³ = 1000 | log10(1000) = 3 |
    | 2³ = 8 | log2(8) = 3 |
    | 2⁴ = 16 | log2(16) = 4 |
    | 2⁵ = 32 |  log2(32) = 5 |

- **Resumo Pesquisa Simples**
    - 100 itens = 100 palpites
    - O(n) tempo de execução linear 

- **Resumo Pesquisa Binária**
    - 100 itens = 7 palpites
    - O(log n) tempo de execução logarítmica
    - GRANDE ECONOMIA DE TEMPO!

- **Notação Big O** = Diz o quão rápido é um algoritmo. A rapidez de um algoritmo não é medida em segundos, mas sim pelo crescimento do número de operações. Calculamos o quão rápido o tempo de execução aumenta conforme o número de elementos também aumenta.

   Exemplos (do + rápido para o + lento):

        - O(log n) = tempo logarítmico;
        - O(n) = tempo linear;
        - O(n*log n) = algoritmo rápido de ordenação (quicksort);
        - O(n²) = algoritmo lento de ordenação (caixeiro viajante).
