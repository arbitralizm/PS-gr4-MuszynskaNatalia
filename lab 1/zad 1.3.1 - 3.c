#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <windows.h>

// INSTRUKCJE WARUNKOWE

// 1.3.1  (r) Napisz program, kt�ry wczytuje ze standardowego wej�cia liczb�
//ca�kowit� n i wypisuje na standardowe wyj�cie warto�� bezwzgl�dn�
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




//1.3.2  Napisz program, kt�ry wczytuje ze standardowego wej�cia dwie liczby
//ca�kowite i wypisuje na standardowym wyj�ciu wi�ksz� z nich (w przypadku gdy podane liczby s� r�wne, program powinien wypisa� kt�r�kolwiek z nich).


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

//1.3.3  Napisz program, kt�ry wczytuje ze standardowego wej�cia trzy liczby
//ca�kowite i wypisuje na standardowym wyj�ciu najwi�ksz� z ich warto�ci (pami�taj o przypadku gdy wszystkie podane liczby lub dwie
//z nich s� r�wne).

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
