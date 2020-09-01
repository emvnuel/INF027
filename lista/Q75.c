/*75. Escreva um programa que ordene um array de inteiros de 15 posições utilizando o
método da bolha (bubble sort).
*/

#include <stdio.h> 
#include <stdlib.h>

int main() {
	
	int i;
	int j;
	int aux;
	int array[15];
	
	srand(time(NULL));
	
	for (i = 0; i < 15; i++)
		array[i] = rand() % 100;

	printf("ANTES DA ORDENACAO:\n");
	for(i = 0; i < 15; i++)
		printf("%d, ", array[i]);

    
	for (i = 0; i < 15; i++) {
		for (j = 0; j < 15; j++) {
	   		if (array[j] > array[j+1]) {

				aux = array[j];
				array[j] = array[j+1];
				array[j+1] = aux;
			}
		}
	}
    

	printf("\nDEPOIS DA ORDENACAO:\n");
	for(i = 0; i < 15; i++)
		printf("%d, ", array[i]);

	return 0;
}