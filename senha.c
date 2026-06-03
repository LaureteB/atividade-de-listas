#include <stdio.h>
int main()
{
    int senha;
    printf("Digite a senha: ");
    scanf("%d", &senha);
    if (senha == 2025)
    {
        printf("Acesso permitido\n");
    }
    else
    {
        printf("Senha incorreta\n");
    }
    return 0;
}
