#include <stdio.h>
int main()
{
    int numero;
    printf("Digite seu salário: ");
    scanf("%d", &numero);
    if (numero >= 2000)
    {
        printf(" Não recebe auxílio\n");
    }
    else
    {
        printf("Pode receber auxílio\n");
    }
    return 0;
}