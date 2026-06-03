#include <stdio.h>
int main()
{
    int a, b;
    printf("Digite o primeiro numero: ");
    scanf("%d", &a);
    printf("Digite o segundo numero: ");
    scanf("%d", &b);
    if (a > b)
    {
        printf("O primeiro numero e maior\n");
    }
    else
    {
        printf("O segundo numero e maior ou igual\n");
    }
    return 0;
}