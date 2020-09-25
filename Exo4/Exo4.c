#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>

int main() {

	int nb;
	nb = rand();
	int saisie=0;
	int count = 1;
	printf("\nEntrez un nombre\n");
	scanf_s("%d", &saisie);
	while (saisie != nb) {
		if (saisie > nb) { printf("\nTrop grand !\n");  }
		if (saisie < nb) { printf("\nTrop petit !\n"); }
		printf("\nEntrez un nombre\n");
		scanf_s("%d", &saisie);
		count += 1;
	}
	printf("\nFelicitations ! Le nombre mystere est %d. il vous a fallu %d tentatives\n",nb,count);

}