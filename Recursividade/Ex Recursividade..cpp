#include<stdio.h>
#include<conio.h>
#include<locale.h>

void bin(int x){
	if (x == 1){
	 printf("%d ", x);
	}
	else{
		printf("%d ", x % 2);
		bin(x / 2);		
	}
}

int prod(int a, int b){
	if (a == 0)
		return 0;
		
	else
		return(prod(a - 1, b) + b);
}

int par(int x){
	if (x == 0)
		return V;
		
	if (x < 0)
		return F;
	
	return par(x - 2);
}

int resto(int m, int n){
	if (n <= 0)
		return 0;
		
	if (n > m)
		return m;
		
	return resto(m - n, n);
}


int quoc(int m, int n){
	int aux;
		
	if (m < n){
		aux = 0;
	}else{
		aux = 1 + quoc(m - n, n);
	}
		
	return aux;
		
}

int quad(int n){
	if (n > 0)
   		return (quad(n-1) + 2*n -1);	 
	else
		return 0;
}


int main(){
	int x, a, b, p, m, n, n1, n2, q;
	setlocale(LC_ALL, "Portuguese");
	printf("Exercicio 1:\n");
	printf("Digite o numero que deseja exibir em binario.\n");
	scanf("%d", & x);
	
	printf("Valor Binario: ");
	bin(x);
	
	printf("\n\nExercicio 2:\n");
	printf("Digite dois valores para calcular o produto.\n");
	
	printf("Numero 1: "); scanf("%d", & a);
	printf("Numero 2: "); scanf("%d", & b);
	
	printf("Produto de %d com %d é: %d", a, b, prod(a, b));
	
	printf("\n\nExercicio 3:\n");
	printf("Digite um numero para saber se é par ou impar, caso retorne verdadeiro é par se não é impar.\n");
	
	printf("Numero: "); scanf("%d", & p);
	printf("Resultado: %d", par(p));
	
	printf("\n\nExercicio 4:\n");
	printf("Digite dois numero para saber o resto da divisão\n");
	
	printf("Numero 1: "); scanf("%d", & m);
	printf("Numero 2: "); scanf("%d", & n);
	printf("Resultado: %d", resto(m, n));
	
	printf("\n\nExercicio 5:\n");
	
	printf("Digite dois numeros para calcular o quociente.\n");
	printf("Numero 1: "); scanf("%d", & n1);
	printf("Numero 2: "); scanf("%d", & n2);
	printf("Resultado %d", quoc(n1, n2));
	
	printf("\n\nExercicio 6:\n");
	printf("Digite um numero para saber a raiz quadrada.\n");
	printf("Numero: "); scanf("%d", & q);
	printf("Resultado: %d", quad(q));
	
	
	
	getch();
	return 0;
}
