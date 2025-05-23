/*
⚔️ Desafio 7: A Provação da Média
O usuário digita 3 notas. 
O programa calcula a média e informa:

Aprovado (média ≥ 7)

Recuperação (5 ≤ média < 7)

Reprovado (média < 5)

📌 Objetivo: Combinação de entrada, cálculo e decisão.
*/

#include <stdio.h>
int main ()
{
    float nota1, nota2, nota3, result;
    printf ("Digite a primeira nota: ");
    scanf ("%f", &nota1 );
    printf ("Digite a segunda nota: ");
    scanf ("%f", &nota2 );
    printf ("Digite a terceira nota: ");
    scanf ("%f", &nota3 );
    
    result = (nota1 + nota2 + nota3)/3;

    if (result >= 7)
    {
        printf("Aprovado");
    }
    else if (result >= 5)
    {
        printf("Recuperacao");
    }
    else 
    {
        printf("Reprovado");
    }
return 0;
}