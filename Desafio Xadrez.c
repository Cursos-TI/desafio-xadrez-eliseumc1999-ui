#include <stdio.h>

int main (){
int i = 0;
int bispo, torre, rainha, cavalo = 1;

    // Entrada da quantidade de movimentos do Bispo
    printf("Número de movimentos do bispo:"); 
    scanf("%d", &bispo);

    //Estrutura Movimentos do Bispo
    while (i < bispo) 
    {
        printf("Cima Direita\n",i); // imprime os movimentos do Bispo
        i++;
    }

    // Entrada da quantidade de movimentos da Torre
    printf("\nEscolha o numero de movimentos da torre:");  
    scanf("%d", &torre); 

        
    // Estrutura Movimentos da Torre
    for (int i = 0; i < torre; i++){ 
    
        printf("Direita \n", i); // imprime o movimento da Torre
    }
  
    // Entrada de dados de movimento da Rainha
    printf("\nEscolha o numero de movimentos da rainha:");
    scanf("%d",&rainha);

    // Estrutura Movimentos da Rainha
    for ( i = 0; i < rainha; i++) 
    {
      printf("Esquerda \n",i);  //imprime o movimento da Rainha
    }

    // Estrutura Movimentos do Cavalo
    printf("\nMovimento do Cavalo: \n");

    while (cavalo--)
  {
    for (int i = 0; i < 2; i++)
    {
        printf("cima \n"); // imprime os movimentos do Cavalo
    }
    
        printf("direita \n"); // imprime os movimentos do Cavalo
  }
  
  return 0;

}