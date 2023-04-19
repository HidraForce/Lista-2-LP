#include <stdio.h>
#include <string.h>

void menor(float x[], int size, float *menor_valor, int *menor_indice)
{
    *menor_valor = x[0];
    *menor_indice = 0;
    for (int i = 1; i < size; i++)
    {
        if (x[i] < *menor_valor)
        {
            *menor_valor = x[i];
            *menor_indice = i;
        }
    }
}
int main(int argc, char const *argv[])
{
    char nomes[10][12];
    float peso[10],media,total;
    int i;

    for ( i = 0; i < 10; i++)
    {
            printf("Insra o nome da %dº pessoa:\n==>",i+1);
            fgets(nomes[i],12,stdin);
            nomes[i][strcspn(nomes[i],"\n")]=0;
            printf("Insira o peso da %dº pessoa",i+1);
            scanf("%f",&peso[i]);
            total+=peso[i];

    }
    media =total/10;
    float menor_valor;
    int menor_indice;
    menor(peso, 10, &menor_valor, &menor_indice);
    printf("A pessoa com menor peso é %s ele(a) possui %.2fKg",nomes[menor_indice],menor_valor);
    printf("A média é %.2f",media);

    for (i = 0; i < 10; i++)
    {
        if (peso[i]<media)
        {
         printf("O paciente %s possui %.2f Kg, está com um peso abaixo da media geral",nomes[i],peso[i]);   
        }
        
    }
    
   
    

    
    return 0;
}
