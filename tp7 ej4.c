#include <stdio.h>

int main() {
	int recaudacionPorLinea[3] = {0}; 
	int recaudacionPorCoche[3][12] = {0};  
	int recaudacionTotal = 0;
	
	while (1) {
		int numeroCoche, numeroLinea, recaudacion;
		
		printf("Ingrese el número de coche (1-12): ");
		scanf("%d", &numeroCoche);
		
		if (numeroCoche < 1) {
			break;
		}
		
		printf("Ingrese el número de línea (1-3): ");
		scanf("%d", &numeroLinea);
		
		printf("Ingrese la recaudación: $");
		scanf("%d", &recaudacion);
		
		if (numeroLinea >= 1 && numeroLinea <= 3 && numeroCoche >= 1 && numeroCoche <= 12) {
			recaudacionTotal += recaudacion;
			recaudacionPorLinea[numeroLinea - 1] += recaudacion;
			recaudacionPorCoche[numeroLinea - 1][numeroCoche - 1] += recaudacion;
		} else {
			printf("Números de línea y coche no válidos. La planilla no se registrará.\n");
		}
	}
	
	printf("Recaudación por línea de colectivo:\n");
	for (int i = 0; i < 3; i++) {
		printf("Línea %d: $%d\n", i + 1, recaudacionPorLinea[i]);
	}
	
	printf("Recaudación por coche:\n");
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 12; j++) {
			printf("Línea %d, Coche %d: $%d\n", i + 1, j + 1, recaudacionPorCoche[i][j]);
		}
	}
	
	printf("Recaudación total general: $%d\n", recaudacionTotal);
	
	return 0;
}
