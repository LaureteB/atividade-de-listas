#include <stdio.h>
int main()
{
    int numero;
    printf("Digite a temperatura: ");
    scanf("%d", &numero);
    if (numero >= 30)
    {
        printf(" muito quente\n");
    }
    else
    {
        printf("temperatura agrádavel\n");
    }
    return 0;
}