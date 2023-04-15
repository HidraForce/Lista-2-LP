#include <stdio.h>
int teste_primo(int x)
{
    int i, resto = 0;
    for (i = 1; i <= x; i++)
    {
        if (x % i == 0)
        {
            resto++;
        }
    }
    if (resto == 2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int dive_tres(int x)
{
    if (x % 3 != 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main(int argc, char const *argv[])
{
    int numeros[10], i, total_primos, soma_tres, media, qtd_impar;
    for (i = 0; i < 10; i++)
    {
        printf("Insira um numero\n==>");
        scanf("%d", &numeros[i]);
    }
    for (i = 0; i < 10; i++)
    {
        if (teste_primo(numeros[i]) == 1)
        {
            total_primos += numeros[i];
        }
        if (dive_tres(numeros[i]) == 1)
        {
            soma_tres += numeros[i];
        }
        if (numeros[i] > 10)
        {
            if (numeros[i] % 2 != 0)
            {
                qtd_impar++;
            }
        }
    }
    media = soma_tres / 10;

    printf("A soma de primos é: %i",total_primos);
    printf("A média de multiplos de 3 é: %i",media);
    printf("A quantidade de impares maiores que 10 é: %i",qtd_impar);

    return 0;
}
