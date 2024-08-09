# Capítulo 2 (Ordenação por Seleção)
- **Array:**
  - Arrays são ótimos se você deseja ler elementos aletórios, pois pode encontrar qualquer item instantâneamente em um array.

  Principais desvantagens:
  - 1 - Você pode não precisar dos espaços extras que reservou; então a memória será desperdiçada. Você não está usando a memória, mas ninguém mais poderá usá-la também.
  - 2 - Você pode precisar adicionar mais de 10 itens (valor estipulado previamente), então terá que mover todos os itens (realocar).

- **Listas Encadeadas:**
  - Seus itens podem estar em qualquer lugar da memória. Cada item armazena o endereço do próximo item da lista (muitas endereços aleatórios de memória estão ligados).
  - Elas são ótimas se você quer ler TODOS os itens. Mas se você quer pular de um item para outro, as listas encadeadas são terríveis. Com o ARRAY é diferente, você sabe o endereço de cada item.
  - Os elementos não estão próximos uns dos outros, então você não pode calcular instantâneamente a posição de um elemento na memória.

- **Inserindo algo no meio da lista:**
  - Usando listas encadeadas, basta mudar o endereço para o qual o elemento anterior está apontando.
  - No array, você deve mover todos os itens que estão abaixo do endereço de inserção. Se não houver espaço, pode ser necessário mover tudo (para inserir item no meio = listas encadeadas são melhores).

- **Deleções:**
  - Se quiser deletar um elemento, novamente será mais fácil com a lista encadeada (pelo mesmo motivo).

- **Tempo de execução para operações comuns de arrays e listas:**
|          | **ARRAYS** | **LISTAS** |
|----------|------------|------------|
| **LEITURA**    | O(1)       | O(n)       |
| **INSERÇÃO**   | O(n)       | O(1)       |
| **ELIMINAÇÃO** | O(n)       | O(1)       |

ps: 0(n) = tempo de execução linear
    0(1) = tempo de execução constante
    Listas = leitura lenta e rápida inserção
    Arrays = leitura rápida e inserção lenta
  