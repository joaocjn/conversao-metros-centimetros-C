//fun��o: Converter metro para cent�metros
//autor: Jo�o C�ndido

#include <stdio.h>
#include <locale.h>

int main (){
	
	setlocale(LC_ALL, "portuguese");
	
	float m, multiplicar;
	
	printf("Insira o tamanho em metros: ");
	scanf("%f", &m);
	
	multiplicar = m * 100;
	
	printf("O resultado �: %.2f cent�metros", multiplicar);
	
return 0;
// � para finalizar os retornos, assim finalizando o c�digo fonte para n�o mais retornar valores
//coloca no final do c�digo fonte	
}
