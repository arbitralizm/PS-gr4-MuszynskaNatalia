#define _CRT_SECURE_NO_WARNINGS
#define MAX_LEN 30
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


typedef struct Produkt {
	char nazwa[MAX_LEN];
    float stawkaVAT;
	double cenaBrutto;
}Produkt;

struct Produkt makeProdukt(const char* nazwa, double cenaBrutto, float stawkaVAT) {
	struct Produkt* tmp = (struct Produkt*)malloc(sizeof(struct Produkt));
	char* nap = (tmp->nazwa);
	while (*nazwa != '\0')
		*nap++ = *nazwa++;
	*nap = '\0';
    tmp->stawkaVAT = stawkaVAT;
	tmp->cenaBrutto = cenaBrutto;
	return *tmp;
}

struct Produkt makeProdukt2(const Produkt* produkt) {
	printf("Napisz nazwe produktu: ");
	scanf("%s", &produkt->nazwa);
	printf("Napisz cene brutto: ");
	scanf("%lf", &produkt->cenaBrutto);
	printf("Napisz stawke VAT:");
	scanf("%f", &produkt->stawkaVAT);
	return *produkt;
}


double cenaNetto(const Produkt *produkt){
    double cena;
    double vat = (produkt->stawkaVAT)/100;
    vat+=1;
    cena = produkt->cenaBrutto/vat;
    return cena;
}

double kwotaVAT(const Produkt *produkt){
    return produkt->cenaBrutto - cenaNetto(produkt);
}

void show(const Produkt *produkt){
    printf("Nazwa produktu: %s\n", produkt->nazwa);
    printf("Cena brutto danego produktu: %lf\n", produkt->cenaBrutto);
    printf("Stawka VAT: %f", produkt->stawkaVAT);
}

int main() {
	char nazwa[] = "Produkt";
	struct Produkt* d = (struct Produkt*)malloc(sizeof(struct Produkt));
	makeProdukt2(d);
	printf("\nNazwa: %s, cena netto: %g\n", d->nazwa, cenaNetto(d));
	printf("Nazwa: %s, kwota VAT: %g%\n", d->nazwa, kwotaVAT(d));
	show(d);
	return 0;

}
