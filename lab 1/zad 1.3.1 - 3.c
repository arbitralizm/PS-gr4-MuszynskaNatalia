#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <windows.h>

// INSTRUKCJE WARUNKOWE

// 1.3.1  (r) Napisz program, który wczytuje ze standardowego wejœcia liczbê
//ca³kowit¹ n i wypisuje na standardowe wyjœcie wartoœæ bezwzglêdn¹
//z n

/*int main()
{
    printf("Wpisz liczbe, aby wyciagnac wartosc bezwgledna: \n");
    int x;
    scanf("%d \n", &x);
    printf("Wynik to: \n");
    int wynik;
    wynik = abs(x);
    printf("%d \n", wynik);

    return 0;
}*/




//1.3.2  Napisz program, który wczytuje ze standardowego wejœcia dwie liczby
//ca³kowite i wypisuje na standardowym wyjœciu wiêksz¹ z nich (w przypadku gdy podane liczby s¹ równe, program powinien wypisaæ któr¹kolwiek z nich).


/*int main()
{
    int x, y;
    scanf("%d", &x);
    scanf("%d", &y);
    if(x>y)
        printf("%d", x);
    else
        printf("%d", y);
    if(x==y)
        printf("whatever %d \n", x);
    return 0;
}*/

//1.3.3  Napisz program, który wczytuje ze standardowego wejœcia trzy liczby
//ca³kowite i wypisuje na standardowym wyjœciu najwiêksz¹ z ich wartoœci (pamiêtaj o przypadku gdy wszystkie podane liczby lub dwie
//z nich s¹ równe).

/*int main()
{
    int x, y, z;
    scanf("%d", &x);
    scanf("%d", &y);
    scanf("%d", &z);
    if(x>=y && x>=z)
        printf("%d", x);
    else if(y>=x && y>=z)
        printf("%d", y);
    else if(z>=x && z>=y)
        printf("%d \n", z);
    return 0;
}*/
