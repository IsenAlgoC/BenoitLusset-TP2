#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>

int main() {
	int annee = 10001;
	while (annee > 10000) {
		printf("\nDonnez Un entier naturel inférieur à 10 000\n");
		scanf_s("%d", &annee);
	}
	if (annee % 4 == 0){
		if (annee % 100 == 0 && !(annee % 400 == 0)) {
			printf("\nAnnee non bissextile\n");
		}
		else { printf("\nAnnee bissextile\n"); }
	}
	else { printf("\nAnnee non bissextile\n"); }

	if (annee % 4 == 0 && ((annee % 100 != 0) || annee % 400 == 0)) {
		printf("\nAnnee bissextile\n");
	}
	else{ printf("\nAnnee non bissextile\n"); }

}