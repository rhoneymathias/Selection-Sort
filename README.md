# 🧮 Ordenação com Selection Sort em C

   Algoritmo de Seleção (Selection Sort): Este algoritmo é baseado em se passar sempre o menor valor do vetor para a primeira posição (ou o maior dependendo da ordem requerida), depois o segundo menor valor para a segunda posição e assim sucessivamente, até os últimos dois elementos.
   Neste algoritmo de ordenação é escolhido um número a partir do primeiro, este número escolhido é comparado com os números a partir da sua direita, quando encontrado um número menor, o número escolhido ocupa a posição do menor número encontrado. Este número encontrado será o próximo número escolhido, caso não for encontrado nenhum número menor que este escolhido, ele é colocado na posição do primeiro número escolhido, e o próximo número à sua direita vai ser o escolhido para fazer as comparações. É repetido esse processo até que a lista esteja ordenada.
   
   ![image](https://github.com/user-attachments/assets/d16f3c6c-7e49-44cd-8a98-59c69bd4786d)
   Figura 1. Esquema de funcionamento do Selection Sort.

Este projeto demonstra o uso do algoritmo **Selection Sort** para ordenar um vetor de 10 números inteiros inseridos pelo usuário, em **ordem crescente** e depois em **ordem decrescente**.

## 🔁 Como funciona

1. O programa solicita ao usuário que insira **10 números inteiros**.
2. Utiliza o algoritmo **Selection Sort** para:
   - Ordenar os números em **ordem crescente** e exibir o vetor.
   - Reordenar os mesmos números em **ordem decrescente** e exibir novamente.

## 💡 Conceitos aplicados

- Algoritmo **Selection Sort** (duas variações: crescente e decrescente)
- Estrutura de repetição `for`
- Manipulação de arrays em C
- Entrada e saída de dados com `scanf` e `printf`

Este projeto foi desenvolvido em linguagem C como parte dos meus estudos em Estrutura de Dados.
