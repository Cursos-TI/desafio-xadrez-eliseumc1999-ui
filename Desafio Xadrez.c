#include <stdio.h>

int main (){

  // ESTRUTURA FOR - MOVIMENTOS DA TORRE 

     int numero, i;

    // Entrada da quantidade de movimentos da torre
    printf("Escolha o numero de movimentos:");  
    scanf("%d", &numero); 

        
    // Mover torre 5 casas a direita
    for (int i = 0; i < numero; i++){ 
    
        printf("Direita \n", i); // imprime o movimento da torre
    }
  
  return 0;


}