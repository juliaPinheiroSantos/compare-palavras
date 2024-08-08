#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <locale.h>

int main(){
	char palavra1[100], palavra2[100];
	int tamanho1 = 0, tamanho2 = 0, result = 0, reset = 1;
	bool letrasDif = false, substring = false;
	setlocale(LC_ALL, "");
	while (reset != 0){
		printf("Comparador de Palavras.\n\n");
		printf("Digite a primera palavra: ");
		fgets(palavra1, 100, stdin);
		tamanho1 = strlen(palavra1)-1;
		
		printf("Digite a segunda palavra: ");
		fgets(palavra2, 100, stdin);
		tamanho2 = strlen(palavra2)-1;
		
		result = strcmp(palavra1, palavra2);
		
		if (strcmp(palavra1, palavra2) == 0){
			for (int i = 0; i < tamanho1; i++){
				if (palavra1[i] == palavra2[i]){
					result == 0;
				}
				
				else if (palavra1[i] != palavra2[i]){
					letrasDif = true;
				}
			}
			
			if (result == 0){
			printf("A primeira palavra (%s ) é igual à segunda (%s )\n", palavra1, palavra2);
		}
		
			else if (letrasDif){
				printf("A primeira palavra (%s ) tem o mesmo tamanho que a segunda (%s ), mas são palavras diferentes\n", palavra1, palavra2);
			}
		}
		
		else if (result < 0){
			printf("A primeira palavra (%s ) é menor que a segunda (%s )\n", palavra1, palavra2);
		}
		
		else if (result > 0){
			printf("A primeira palavra (%s ) é maior que a segunda (%s )\n", palavra1, palavra2);
			
			for (int i = 0; i < tamanho2; i++){
				if(palavra2[i] == palavra1[i]){
					substring = true;
				}
				
				else {
					substring = false;
				}
			}
			
			if (substring){
				printf("A segunda palavra (%s ) é sub-string da primeira (%s )\n", palavra2, palavra1);
			}
		} 
	
	reset = 0;
	
	}
	
	
	
	
	
	return 0;
}
