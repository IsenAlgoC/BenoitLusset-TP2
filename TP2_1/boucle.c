#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main() {

	int n =100;
	int i;
	unsigned short sommeFOR = 0;
	unsigned short valeur_demandee;
	printf("Entrez un n pour la boucle FOR\n");
	scanf_s("%hu", &valeur_demandee);
	while (valeur_demandee > 361) { printf("Valeur trop grande, recommencez\n"); scanf_s("%hu", &valeur_demandee);}
	for (i = 1; i <= valeur_demandee; i += 1) {
		sommeFOR = sommeFOR + i;
	}
	printf("\nBOUCLE FOR :\nLa somme des nombres de 1 jusque n = %d vaut %d\n", valeur_demandee,sommeFOR); //Si max dépassé, la somme revient à 0 et recommence

	int j=1;
	int sommeWHILE = 0;
	while (j <= n) {
		sommeWHILE = sommeWHILE + j;
		j += 1;
	}
	printf("\nBOUCLE WHILE :\nLa somme des nombres de 1 jusque n = %d vaut %d\n", n, sommeWHILE);

	int k = 1;
	int sommeDO = 0;
	do {
		sommeDO = sommeDO + k;
		k += 1;
	} while (k <= n);
	printf("\nBOUCLE DO :\nLa somme des nombres de 1 jusque n = %d vaut %d\n", n, sommeDO);

	//il faut que somme+i<=65535
	bool check = false;
	int l ;
	unsigned short int sommeMAX = 0;
	int MAX = 1;
	while (check == false) {
		sommeMAX = 0;
		for (l = 1; l <= MAX; l += 1) {
			if (sommeMAX + l >= 65535) {
				check = true;
				break;
			}
			else{ sommeMAX = sommeMAX + l; }
		}
		if (check == false) { MAX += 1; }
	}

	printf("\nLe n limite avant d'atteindre la somme maximale est %d et la somme est %d\n", MAX-1, sommeMAX);

}