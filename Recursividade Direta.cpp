
#include <stdio.h>
#include <conio.h>

//função fatorial
int fat(int n){
 if(n == 0)
 return 1 ;
 else
 return n * fat(n - 1);
}

// função máximo divisor comum 
int mdc(int n1, int n2){
 if(n2 == 0)
 return n1;
 else
 return mdc(n2, n1 % n2);
}



int main(){
 int num, n1, n2;
 printf("Fatorial\n\n");
 
 printf("Numero: ");
 scanf("%d", &num);
 printf("Fat = %d\n\n", fat(num));
 
 printf("MDC\n\n");
 
 printf("Numero: ");
 scanf("%d", &n1);
 printf("Numero: ");
 scanf("%d", &n2);

 printf("MDC = %d\n\n", mdc(n1,n2));


 getch();
 return 0;
}





