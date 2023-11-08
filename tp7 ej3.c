#include <stdio.h>

int main() {
	int matriz[2][3];
	
	
	for (int fila = 0; fila < 2; fila++) {
		for (int columna = 0; columna < 3; columna++) {
			printf("Ingrese un valor para la fila %d y la columna %d: ", fila + 1, columna + 1);
			scanf("%d", &matriz[fila][columna]);
		}
	}
	
	for (int columna = 0; columna < 3; columna++) {
		matriz[0][columna] *= 4;
	}
	
	for (int fila = 0; fila < 2; fila++) {
		matriz[fila][2] *= 3;
	}
	
	int menorValor = matriz[0][0];
	for (int fila = 0; fila < 2; fila++) {
		for (int columna = 0; columna < 3; columna++) {
			if (matriz[fila][columna] < menorValor) {
				menorValor = matriz[fila][columna];
			}
		}
	}
	
	int suma = 0;
	for (int fila = 0; fila < 2; fila++) {
		for (int columna = 0; columna < 3; columna++) {
			suma += matriz[fila][columna];
		}
	}
	
	printf("Contenido de la matriz modificada:\n");
	for (int fila = 0; fila < 2; fila++) {
		for (int columna = 0; columna < 3; columna++) {
			printf("%d ", matriz[fila][columna]);
		}
		printf("\n"); 	}
	
	printf("Menor valor de la matriz: %d\n", menorValor);
	printf("Suma de todos los elementos de la matriz: %d\n", suma);
	
	return 0;
}
