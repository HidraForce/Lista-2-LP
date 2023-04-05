/***
 *1) Escreva um programa que leia a idade de 10 pessoas e armazene-as em um vetor calcule e mostre:
 *a) a menor idade| b) A média das idades|| C) A quantidade de pessoas entre 20 e 30 anos(Inclusive)
 *D) A quantidade de pesoas com idade acima da média
 *
 */
#include <stdio.h>



int main(int argc, char const *argv[])
{
    // Declaração de variveis
    int idade[10], i, menor, sum, media, qtd1,qtd2;
    // loop para inserir dados na variavel idade
    for (i = 0; i < 10; i++)
    {
        printf("Insira um numero: \n-->");
        scanf("%d", &idade[i]);
        // soma para verificar a soma dos valores inseridos
        sum += idade[i];
    }
    // caulcuo da média(10 é constante devido ao numero de possiveis valores inseridos)
    media = sum / 10;
    // Atribuição de valor à variavel menor para quisito de comparação
    menor = idade[0];
    // Loop para tratar os dados requisitados no enunciado
    for (i = 0; i < 10; i++)
    {
        // Condicional para localizar o menor valor
        if (idade[i] < menor)
        {
            menor = idade[i];
        }
        // condicional para averiguar idades entre 20 e 30 anos
        if (idade[i] >= 20 && idade[i] <= 30)
        {
            qtd1++;
        }
        //Condicional para contar o numero de pessoas com idade acima da média
        if (idade[i]>media)
        {
            qtd2++;
        }
        
    }
    //Saida
    printf("A menor idade é: %d",menor);
    printf("A média das idades é: %d",media);
    printf("O numero de pessoas com idade entre 20 e 30 é: %d",qtd1);
    printf("O numero de pessoas com idade acima da média é: %d",qtd2);

    return 0;
}
