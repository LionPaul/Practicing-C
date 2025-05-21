//3. Número par ou ímpar
#include <stdio.h>

int main()
{
    int num;
    printf("Digite o numero: ");
    scanf("%d", &num);
    if (num % 2 == 0)
    {
        printf("é par");
    }
    else
    {
        printf("é impar");
    }
    return 0; 
}