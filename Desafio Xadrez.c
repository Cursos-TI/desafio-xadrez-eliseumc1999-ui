#include <stdio.h>

int main (){

// ESTRUTURA WHILE - MOVIMENTOS BISPO

    int i = 0, numero;
    
    // Entrada da quantidade de movimentos do bispo

    printf("Número de movimentos do bispo:"); 
    scanf("%d", &numero);

    while (i < numero) 
    {
        printf("Cima Esquerda \n",i); // imprime os movimentos do bispo
        i++;
    }
    
  return 0;


}