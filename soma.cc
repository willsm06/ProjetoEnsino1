#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	int n1, n2, resultado;
	printf("Digite um valor inteiro: ");
	scanf("%d", &n1);
	printf("Digite outro valor inteiro: ");
	scanf("%d", &n2);
	resultado = n1 + n2;
	printf("\nO resultado é: %d", resultado);
}

//Atividade
//fazer uma calculadora completa
//usar o site "https://www.onlinegdb.com/online_c_compiler" para compilar
