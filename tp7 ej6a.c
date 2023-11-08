#include <stdio.h>

int main() {
	int totalPisos = 20;
	int departamentosPorPiso = 6;
	int habitantesPorDepartamento = 4; 
	
	int totalHabitantes = totalPisos * departamentosPorPiso * habitantesPorDepartamento;
	
	printf("Cantidad total de habitantes en la torre: %d\n", totalHabitantes);
	
	return 0;
}
