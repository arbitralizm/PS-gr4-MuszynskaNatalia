#include <stdio.h>
#include <stdlib.h>

typedef struct student{
    char imie[32];
    char nazwisko[64];
    char adres[256];
    int pesel;
    char kierunek[256];
    int legitymacja[6];
} student;

void dane(student *s){
    printf("Numer legitymacji studenta: ");
    gets(s->legitymacja);
    printf("Pesel studenta: ");
    gets(s->pesel);
    printf("Imie studenta: ");
    gets(s->imie);
    printf("Nazwisko studenta: ");
    gets(s->nazwisko);
    printf("Adres studenta: ");
    gets(s->adres);
    printf("Kierunek studenta: ");
    gets(s->kierunek);
}

int main(){
    student *s1 = (student*) malloc(sizeof(student));
    dane(s1);
    printf("---------\n");
    printf("%s\n", s1->imie);
    printf("%s\n", s1->nazwisko);
    printf("%s\n", s1->adres);
    printf("%s\n", s1->pesel);
    printf("%s\n", s1->kierunek);
    printf("%s\n", s1->legitymacja);
    return 0;
}
