#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


void podmienianie(char* nap) {
	while (*nap != '\0') {
		if ((*nap >= 'a')&&(*nap <= 'z'))
			*nap -= 'a' - 'A';
		*nap++;
	}
}

int main() {
	char nap[20];
	printf("Podaj napis: \n");
	scanf("%s", &nap);
	podmienianie(nap);
	printf("%s", nap);
	return 0;
}
