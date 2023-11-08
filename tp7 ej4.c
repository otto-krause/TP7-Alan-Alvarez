#include <stdio.h>

int main() {
	int recaudacionPorLinea[3] = {0}; 
	int recaudacionPorCoche[3][12] = {0};  
	int recaudacionTotal = 0;
	
	while (1) {
		int numeroCoche, numeroLinea, recaudacion;
		
		printf("Ingrese el n�mero de coche (1-12): ");
		scanf("%d", &numeroCoche);
		
		if (numeroCoche < 1) {
			break;
		}
		
		printf("Ingrese el n�mero de l�nea (1-3): ");
		scanf("%d", &numeroLinea);
		
		printf("Ingrese la recaudaci�n: $");
		scanf("%d", &recaudacion);
		
		if (numeroLinea >= 1 && numeroLinea <= 3 && numeroCoche >= 1 && numeroCoche <= 12) {
			recaudacionTotal += recaudacion;
			recaudacionPorLinea[numeroLinea - 1] += recaudacion;
			recaudacionPorCoche[numeroLinea - 1][numeroCoche - 1] += recaudacion;
		} else {
			printf("N�meros de l�nea y coche no v�lidos. La planilla no se registrar�.\n");
		}
	}
	
	printf("Recaudaci�n por l�nea de colectivo:\n");
	for (int i = 0; i < 3; i++) {
		printf("L�nea %d: $%d\n", i + 1, recaudacionPorLinea[i]);
	}
	
	printf("Recaudaci�n por coche:\n");
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 12; j++) {
			printf("L�nea %d, Coche %d: $%d\n", i + 1, j + 1, recaudacionPorCoche[i][j]);
		}
	}
	
	printf("Recaudaci�n total general: $%d\n", recaudacionTotal);
	
	return 0;
}
