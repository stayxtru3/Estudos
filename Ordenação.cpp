#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<locale.h>


void bubble_sort(int vet[], int max) {      
    int flag, i, aux;   
    
    do {
      flag = 0;
      for (i = 0; i < (max - 1); i++) 
      {
      /* Verfica se o vetor esta¡ em ordem, no caso ele coloca em ordem crescente, para decrescente trocar '>' por '<' */
         if (vet[i] > vet[i+1]) {
         /* Caso nao esteja, ordena */
          aux = vet[i];
          vet[i] = vet[i+1];
          vet[i+1] = aux;
          flag = 1;
          }
      }
    /* Repete enquanto algum valor estiver fora de ordem */  
    } while (flag == 1);
    
    /* Imprime o vetor ordenado em ordem crescente */
    for (i = 0; i < max; i++) {
      printf ("%d ",vet[i]);
    }
    printf ("\n");
}
 
int main(){
    //setlocale(LC_ALL, "portuguese");
    int options, i;
    int size;
    system ("color A");
    //system ("color /? |more");
     
    printf("1- Bubble Sort.\n2- Selection Sort\n3- Insertion Sort\nChoose a option.\n");
    scanf("%d", &options); /* Variavel de selecao do case */
    
    switch(options){
      case 1:
           printf("Digite o numero maximo do seu vetor.\n");
          /* Le o total de numeros do vetor */
          scanf("%d", &size);
          
          /* Define o vetor com o numero max */
          int vetor[size];
          
          for(i = 0; i < size; i++){
          /* Le cada indice */
             printf("indice %d\n", i+1);
             scanf("%d", &vetor[i]);
          }
          
          /* Execusao da funcao do vetor */
          bubble_sort(vetor, size);
          break;
      case 2:
           printf("NÃ£o sei.");
           break;
      }
          
    system("pause");
}
