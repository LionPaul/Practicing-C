/*
⚔️ Desafio 8: O Julgamento Final
Faça um programa que leia um número n
e calcule a soma de todos os números de 1 até n.

📌 Exemplo: Se n = 5 → 1+2+3+4+5 = 15

📌 Objetivo: Laço com acumulador (soma += i)
*/

#include <stdio.h>

int main ()
{
    int num, i, result, acumulado = 0;
    printf("Digite um numero:");
    scanf("%d", &num);

    for (i = 1; i <= num; i++)
    {
        result = i;
        acumulado = acumulado + result;

        printf("%d\n", result);
    }
    printf("Acumulado: %d", acumulado);
}