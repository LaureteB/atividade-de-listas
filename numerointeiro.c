#include <stdio.h>
int main()
{
    int numero;
    printf("Digite um numero: ");
    scanf("%d", &numero);
    if (numero % 5 == 0 ){
        printf(" Multiplo de 5\n");
    }
    else
    {
        printf("Não é multiplo de 5\n");
    }
    return 0;
}