/*
⚔️ Desafio 6: Tabuada do Ferro
O usuário digita um número, e o programa mostra 
a tabuada de multiplicação de 1 a 10.

📌 Objetivo: Laço + operações.
*/
#include <stdio.h>

int main ()
{
    int i, num, result;
    printf("Digite o um numero:");
    scanf("%d", &num);
    
    for (i = 1; i <= 10; i++)
    {
        result = num * i; 
        printf("%d", result);     
    }
}
