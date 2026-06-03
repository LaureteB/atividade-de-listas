#include <stdio.h>
int main()
{
    int numero;
    printf("Digite o número: ");
    scanf("%d", &numero);
    if (numero >= 10)
    {
        printf(" Maior que 10\n");
    }
    else
    {
        printf("menor que 10\n");
    }
    return 0;
}