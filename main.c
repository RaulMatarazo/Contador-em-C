#include <stdio.h>
#include <locale.h>

int main() {
	// Variáveis
	int num, totalPar = 0, totalImp = 0, i = 0;
	// Usando o setlocale() para usar caracteres especiais
	setlocale(LC_ALL, "Portuguese");
	printf("--- CONTADOR DE PARES E ÍMPARES ---\n");
	// Pedindo um número entre 1 e 100
	printf("Insira um valor entre 1 e 100: ");
	scanf("%i", &num);
	// Verificando se o número está realmente entre 1 e 100
	while(num < 1 || num > 100){
		printf("[ERRO] Insira um valor válido: ");
		scanf("%i", &num);
	}
	// Usando o laço de repetição for()
	for(i = num;i >= 1;i--) {
		if(i % 2 == 0) {
			totalPar += 1;
		} else{
			totalImp += 1;
		}
	}
	// Resultado
	printf("O número escolhido foi %i\n", num);
	printf("De 1 a %i, existem %i números pares e %i números ímpares.", num, totalPar, totalImp);
}