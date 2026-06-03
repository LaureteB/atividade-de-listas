#include <stdio.h>
int main()
{
    int numero;
    printf("Digite sua idade: ");
    scanf("%d", &numero);
    if (numero >= 18)
    {
        printf(" Maior de idade\n");
    }
    else
    {
        printf("menor de idade\n");
    }
    return 0;
}