/*
⚔️ Desafio 4: Triagem de Sangue
O usuário digita sua idade. O programa diz se ele é:

Jovem (< 18)

Adulto (18–64)

Ancião (65+)

📌 Objetivo: Usar estruturas condicionais múltiplas.*/

#include <stdio.h>

int main () 
{
    int idade;
    printf("Escreva sua idade: ");
    scanf("%d", &idade);

    if (idade < 18)
    {
        printf("Jovem");
    }
    else if (idade < 65)
    {
        printf ("Adulto");
    }
    else 
    {
        printf("Anciao");
    }
return 0;
}
