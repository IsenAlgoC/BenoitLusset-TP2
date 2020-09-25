#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>

void swap3(float a, float b, float c) {
	int d;
	d = a;
	a = b;
	b = c;
	c = d;
}

int main() {

	bool check = false;
	char commande[100];
	while (check == false){
		float longueur = 0;
		float largeur = 0;
		float hauteur = 0;

		printf("\nVeuillez entrer la longueur en centimetres\n");
		scanf_s("%f", &longueur);
		while (longueur < 1 || longueur>150) {
			printf("La longueur semble eronnee, recommencez\n");
			scanf_s("%f", &longueur);
		}
		printf("\nVeuillez entrer la largeur en centimetres\n");
		scanf_s("%f", &largeur);
		while (largeur < 1 || largeur>150) {
			printf("La largeur semble eronnee, recommencez\n");
			scanf_s("%f", &largeur);
		}
		printf("\nVeuillez entrer la hauteur en centimetres\n");
		scanf_s("%f", &hauteur);
		while (hauteur < 1 || hauteur>150) {
			printf("La hauteur semble eronnee, recommencez\n");
			scanf_s("%f", &hauteur);
		}

		if (longueur <= 55 && largeur <= 35 && hauteur <= 25||
			largeur <= 55 && longueur <= 35 && hauteur <= 25||
				largeur <= 55 && hauteur <= 35 && longueur <= 25||
					longueur <= 55 && hauteur <= 35 && largeur <= 25||
						hauteur <= 55 && largeur <= 35 && longueur <= 25||
							hauteur <= 55 && longueur <= 35 && largeur <= 25) {
								printf("\nVALIDE\n");
		}
		else { printf("\nINVALIDE\n"); }

		printf("\nTapez \"FIN\" pour terminer le programme, sinon tapez n'importe quoi\n");
		scanf_s("%1s", &commande,_countof(commande));
		if (strcmp(commande, "FIN") == 0) { check = true; }
	}

}