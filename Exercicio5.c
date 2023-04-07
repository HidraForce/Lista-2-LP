// Enunciado
/*5) Escreva um programa que preencha um vetor com os nomes de 5 vendedores, preencha
também outro vetor com valor total das vendas de cada vendedor. Cada vendedor recebe
10% de comissão sobre as vendas. Faça os seguintes cálculos e mostre os resultados na
tela:
a. Uma listagem com o nome e o valor a receber de cada vendedor (total das
vendas * 0.10)
b. O total (bruto) vendido pelos 5 vendedores
c. A média do total de vendas (valor bruto vendido por cada vendedor)
d. A quantidade de vendedores que venderam acima da média das vendas
e. O maior valor de comissão e o nome do vendedor que recebeu*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
    // DECLARAÇÃO DAS VARIAVEIS
    char Nomes[5][12];
    float Vendas[5], pagamento[5], total = 0, media, maior;
    int i, qtd = 0, idVendedor;
    // Loop para entrada de dados
    for (i = 0; i < 5; i++)
    {
        printf("Insira o tatal das vendas do vendedor: \n==>");
        scanf("%f", &Vendas[i]);
        total += Vendas[i]; // Total bruto das vendas
        printf("Insira o nome do vendedor\n==>");
        fgets(Nomes[i], 12, stdin);
    }
    media = total / 5;      // 5 é constante devido a ser o total de vendedores
    maior = Vendas[0];      // Declarando um valor base para comparação
    for (i = 0; i < 5; i++) // Looop para tratar os dados que serão Mostrados ao usuario
    {
        pagamento[i] = Vendas[i] * 0.10; // Caulcula a comissão e inere ao id de cada vendedor
        if (Vendas[i] > media)           // Vendedore que Obtiveram resultados acima da média
        {
            qtd++; // incrementador
        }
        if (Vendas[i] > maior) // Maior volor em vendas
        {
            maior = Vendas[i];
            idVendedor = i; // As posiões de salrio e nome em seus respectivos
                            // vetores se relacionam logo i pode ser usado com ID
        }
    }
    printf("Segue uma listagem dos Vendedores e suas Comissões");
    for ( i = 0; i < 5; i++)
    {
        printf("O vendedor %s obteve em comissões %.2f",Nomes[i],pagamento[i]);
    }
    

    return 0;
}
