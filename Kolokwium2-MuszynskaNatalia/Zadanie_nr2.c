#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 500

void wypisz(short* tab, int rozmiar) {
	for (int i = 0; i < rozmiar; i++)
		printf("%d ", tab[i]);
}

void odwroc(short *tab, int lewy, int prawy) {
	printf("Odwracam elementy tablicy od indexu %d do %d\n", lewy, prawy);
	short temp;
	for (int i = 0; i < (prawy - lewy) / 2; i++) {
		temp = *(tab+lewy + i);
		*(tab+lewy + i) = *(tab+prawy - i);
		*(tab+prawy - i) = temp;
	}
}

int main() {
	srand(time(NULL));
	int n;
	printf("Podaj liczbe n z przedzialu 1 do %d\n", N);
	scanf("%d", &n);
	short tab[N] = {};
	for (int i = 0; i < N; i++)
		tab[i] = (rand() % 300) - 200;
	wypisz(tab, n);
	printf("\n________\n");
	odwroc(tab, 3, 11);
	wypisz(tab, n);
}
