#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main() {

	int n = 100;
	int i;
	int sommeFOR = 0;
	for (i = 1; i <= n; i += 1) {
		sommeFOR = sommeFOR + i;
	}
	printf("BOUCLE FOR :\nLa somme des nombres de 1 jusque n = %d vaut %d\n", n,sommeFOR);

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

}