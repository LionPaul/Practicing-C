/*
⚔️ Desafio 3: O Oráculo de Paridade
Leia um número inteiro e diga se ele é par ou ímpar.

📌 Objetivo: Praticar condição com if.
*/

#include <stdio.h>

int main ()
{
    int num; 

    printf("Write the number: ");
    scanf("%d", &num);

    if (num % 2 == 0)
    {
        printf("The number is even");
    }
    else
    {
        printf("The number is odd");
    }

return 0;
}