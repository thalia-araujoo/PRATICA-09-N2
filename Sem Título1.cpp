//fatorial repulsiva

#include <stdio.h>
#include <locale.h>
//crie uma fun��o//

int fatorial(int n);

int main(){
	setlocale(LC_ALL, "Portuquese_Brazil");
	int r, num;
	scanf("%d", &num);
	
	r = fatorial(num);
	
	if(r == -1){
		printf("Entrada invalida");
	}else{
		//chamo a fun��o
		printf("%d", fatorial(num));
	}
		
}
/*
 	fun��o: calcular fatorial
 	Entrada: n inteiro
 	Saida: fatorial de n, se n>0 ou -1, se n < 0
*/

//assinatura da fun��o//
int fatorial(int n){
	//caso base//
	if(n==0){
		return 1;
	}
	if(n>0){
		
	//eu sempre tenho que reduzir a entrada 
	   return n * fatorial(n-1);
	}	
	return -1;
}
