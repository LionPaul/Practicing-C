//Maior de dois números

#include <stdio.h>

int main()
{
    int num1, num2;
    printf("Digite o Primeiro Numero:");
    scanf("%d", &num1);
    printf("Digite o Segundo Numero:");
    scanf("%d", &num2);

    if (num1 > num2)
    {
        printf ("O numero maior: %d ",num1 );
    }
    else
    {
        printf ("O numero maior: %d ",num2);
    }
}