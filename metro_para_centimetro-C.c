//função: Converter metro para centímetros
//autor: João Cândido

#include <stdio.h>
#include <locale.h>

int main (){
	
	setlocale(LC_ALL, "portuguese");
	
	float m, multiplicar;
	
	printf("Insira o tamanho em metros: ");
	scanf("%f", &m);
	
	multiplicar = m * 100;
	
	printf("O resultado é: %.2f centímetros", multiplicar);
	
return 0;
// é para finalizar os retornos, assim finalizando o código fonte para não mais retornar valores
//coloca no final do código fonte	
}
