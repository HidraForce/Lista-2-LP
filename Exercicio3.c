// Enunciado
/* 3) Faça um programa que preencha dois vetores, A e B com 5 números em cada. Gere o o
vetor C, com os números do vetor A e B. Depois calcule e mostre na tela a quantidade de
números perfeitos. Um número é perfeito quando ele é igual a soma dos seus divisores
exceto ele próprio. (Ex: 6 é perfeito, 6 = 1 + 2 + 3, que são seus divisores) */

#include <stdio.h>

int main(int argc, char const *argv[])
{
    // Declaração das variaveis
    int vetA[5], vetB[5], vetC[10], i, k, soma, j, vetN, qtd = 0;
    // Entrada de valores para os vetores A e B
    for (i = 0; i < 5; i++)
    {
        printf("Insira um valor para o vetor A\n==>");
        scanf("%d", &vetA[i]);
        printf("Insira um valor para o vetor B\n==>");
        scanf("%d", &vetB[i]);
    }
    // Instancia da variavel K para ser usada como incrementador na organização do vetor C
    k = 0;
    // Criação do vetor C
    for (i = 0; i < 5; i++)
    {
        vetC[k] = vetA[i];
        k++;
        vetC[k] = vetB[i];
        k++;
    }
    // Verificando numeros perfeitos dentro do vetor C
    for (i = 0; i < 10; i++)
    {
        if (vetC[i] != 0)
        {
            soma = 0;

            vetN = vetC[i]; // Variavel para limitar a soma

            for (j = 1; j < vetN; j++)
            {
                if (vetN % j == 0)
                {
                    soma += j; // Soma os valores que compoem o numero em questão
                }
            }
        }

        // instancia da variavel soma para testagem de numeros perfeitos

        if (soma == vetN && vetN != 0) // testa se o numero é perfeito
        {
            qtd++; // conta o numero de elementos do vetor que podem ser considerados numeros perfeitos
        }
    }
    // Saida
    printf("O numero de elementos perfeitos é de %d\n", qtd);

    return 0;
}
