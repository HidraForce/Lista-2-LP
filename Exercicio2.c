//Enunciado
/* 2) Faça um programa que preencha um vetor com 10 cores diferentes. Depois permita fazer
uma pesquisa se uma determinada cor existe armazenada no vetor, se existir deve ser
impresso na tela a cor e em qual posição (índice) esta cor está armazenada. A pesquisa
deve ser feita até que seja digitado FIM na cor a ser pesquisada na lista. */
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main(int argc, char const *argv[])
{
    // Declaração de variaveis
    char cores[10][13], busca[13], found[13];
    int i, posicao;
    bool existe = false;
    //entrada das cores a sere armazenadas
    for (i = 0; i < 10; i++)
    {
        printf("Insira uma cor\n==>");
        fgets(cores[i], sizeof(cores[i]), stdin);
        //removendo /n do fgets
        cores[i][strcspn(cores[i], "\n")] = 0;
    }
    //Loop Simples para Sistema de busca
    while (1)
    {
        //Entrada da busca
        printf("Insira sua busca: \n==>");
        fgets(busca, sizeof(busca), stdin);
        //Removendo /n do fgets
        busca[strcspn(busca, "\n")] = 0;
        //Teste para fim Do loop
        if (strcmp(busca, "FIM") == 0)
        {
            printf("Exited\n");
            break;
        }
        else
        {
            //Iniciando Pesquisa e reiniciando a variavel existe
            existe = false;
            for (i = 0; i < 10; i++)
            {
                //Procurando a exitencia da cor a ser buscada
                if (strcmp(busca, cores[i]) == 0)
                {
                    //Salvando a posição da cor no array
                    posicao = i;
                    //Afirmando a existencia da cor
                    existe = true;
                }
            }
            //Apos definir os resultados da busca, se a cor buscada realmente existir ou não teremos as saidas abaixo
            if (existe == true)
            {
                printf("A cor %s existe no sistema e possui o ID de valor %d\n", busca, posicao);
            }
            else
            {
                printf("Sorry not found\n");
            }
        }
    }

    return 0;
}

