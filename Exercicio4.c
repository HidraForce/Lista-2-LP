#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    //Var declaration
    int i, qtd = 0, qtd2 = 0;
    float price[5], total = 0, media, maior = 0;
    char NomeProduto[5][100], nomeMaior[100];
    
    //Loop para inserção de dados
    for (i = 0; i < 5; i++)
    {
        printf("Insira o nome do produto %d: ", i+1);
        fgets(NomeProduto[i], 100, stdin);
        NomeProduto[i][strcspn(NomeProduto[i], "\n")] = 0; //Remover \n no final da entrada
        printf("Insira o preço do produto %d: ", i+1);
        scanf("%f", &price[i]);
        getchar(); // Limpando o buffer de entrada
        total += price[i]; //Somatória do total dos valores do produto
    }
    
    media = total / 5; //Média dos valores dos produtos

    // Testagem das propostas
    for (i = 0; i < 5; i++)
    {
        if (price[i] < 10) //Valores abaixo de 10
        {
            qtd++;
        }
        if (price[i] > media) //Valores acima da média
        {
            qtd2++;
        }
        if (price[i] > maior) //Produto de maior valor
        {
            maior = price[i];
            strcpy(nomeMaior, NomeProduto[i]); //Atribuir o nome do produto mais caro
        }
    }
    
    printf("a quantidade de produtos que o valor é abaixo de 10 reais é: %d\n", qtd);
    printf("a média dos valores dos produtos é: %.2f\n", media);
    printf("a quantidade de produtos que valor acima da média é: %d\n", qtd2);
    printf("O produto %s é o produto de maior valor, sendo ele %.2fR$\n", nomeMaior, maior);
    printf("==============================================================\n");
    
    printf("Segue a listagem de produtos e seus valores:\n");
    for (i = 0; i < 5; i++)
    {
        printf("%s ==> %.2fR$\n", NomeProduto[i], price[i]);
    }

    return 0;
}


