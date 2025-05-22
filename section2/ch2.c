/*
⚔️ Desafio 2: A Escolha do Servo
Leia dois números digitados pelo usuário e exiba a soma, subtração, multiplicação e divisão deles.

📌 Objetivo: Praticar entrada com scanf, operações aritméticas.
*/

#include <stdio.h>

int main ()
{
    int num1, num2, soma, sub, mult, div;
    printf("Número Um:");
    scanf("%d", &num1);
    printf("Número Dois");
    scanf("%d", &num2);

    soma = num1 + num2;
    sub = num1 - num2;
    mult = num1 * num2;
    div = num1 / num2;

    printf("A soma é: %d\nA subtração é: %d\n A multuplicação é: %d\nA divisão é: %d\n", soma, sub, mult, div);
}