//função fibonacci//

#include <stdio.h>
#include <locale.h>

int fib(int n);


int main(){
	setlocale(LC_ALL, "Portuquese_Brazil");
	int r, num;
	
	printf("Informe um número:\n ");
	scanf("%d", &num);
	
	r = fib(num);
	
	if(r == -1){
		printf("Entrada invalida");
	}else{
		//chamo a função
		printf("%d", fib(num));
	}
		
}

int fib(int n){
	//caso base, ele sempre retorna 1//
	if(n<=2){
		return 1;
	}else{
		return fib(n-1) + fib(n-2);
	}

}


