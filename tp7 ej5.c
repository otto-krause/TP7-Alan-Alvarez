#include <stdio.h>
#include <string.h>

int main() {
	int legajos[100];
	int notasTrimestre1[100];
	int notasTrimestre2[100];
	int notasTrimestre3[100];
	float promedios[100];
	
	for (int i = 0; i < 100; i++) {
		legajos[i] = i + 1;  
		notasTrimestre1[i] = 0;
		notasTrimestre2[i] = 0;
		notasTrimestre3[i] = 0;
		promedios[i] = 0.0;
	}
	
	for (int i = 0; i < 100; i++) {
		printf("Ingrese las notas para el alumno con legajo %d:\n", i + 1);
		printf("1° Trimestre: ");
		scanf("%d", &notasTrimestre1[i]);
		printf("2° Trimestre: ");
		scanf("%d", &notasTrimestre2[i]);
		printf("3° Trimestre: ");
		scanf("%d", &notasTrimestre3[i]);
		// Calcular el promedio
		promedios[i] = (float)(notasTrimestre1[i] + notasTrimestre2[i] + notasTrimestre3[i]) / 3.0;
	}
	
	char respuesta[3];
	int continuarCorreccion = 1;
	while (continuarCorreccion) {
		int legajo, trimestre, nuevaNota;
		
		printf("¿Desea corregir alguna nota? (SI/NO): ");
		scanf("%s", respuesta);
		
		if (strcmp(respuesta, "SI") == 0) {
			printf("Ingrese el número de legajo: ");
			scanf("%d", &legajo);
			printf("Ingrese el trimestre a corregir (1, 2 o 3): ");
			scanf("%d", &trimestre);
			printf("Ingrese la nueva nota: ");
			scanf("%d", &nuevaNota);
			
			if (trimestre == 1) {
				printf("Nota anterior en el 1° Trimestre: %d\n", notasTrimestre1[legajo - 1]);
				printf("¿Confirma la modificación? (SI/NO): ");
				scanf("%s", respuesta);
				if (strcmp(respuesta, "SI") == 0) {
					notasTrimestre1[legajo - 1] = nuevaNota;
				}
			} else if (trimestre == 2) {
				printf("Nota anterior en el 2° Trimestre: %d\n", notasTrimestre2[legajo - 1]);
				printf("¿Confirma la modificación? (SI/NO): ");
				scanf("%s", respuesta);
				if (strcmp(respuesta, "SI") == 0) {
					notasTrimestre2[legajo - 1] = nuevaNota;
				}
			} else if (trimestre == 3) {
				printf("Nota anterior en el 3° Trimestre: %d\n", notasTrimestre3[legajo - 1]);
				printf("¿Confirma la modificación? (SI/NO): ");
				scanf("%s", respuesta);
				if (strcmp(respuesta, "SI") == 0) {
					notasTrimestre3[legajo - 1] = nuevaNota;
				}
			} else {
				printf("Trimestre no válido. La corrección no se registrará.\n");
			}
			
			printf("¿Desea continuar corrigiendo notas? (SI/NO): ");
			scanf("%s", respuesta);
			if (strcmp(respuesta, "NO") == 0) {
				continuarCorreccion = 0;
			}
		} else if (strcmp(respuesta, "NO") == 0) {
			continuarCorreccion = 0;
		}
	}
	
	printf("N° DE LEGAJO 1° TRIMESTRE 2° TRIMESTRE 3° TRIMESTRE PROMEDIO\n");
	for (int i = 0; i < 100; i++) {
		printf("%-11d %-12d %-12d %-12d %.2f\n", legajos[i], notasTrimestre1[i], notasTrimestre2[i], notasTrimestre3[i], promedios[i]);
	}
	
	return 0;
}
