#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <windows.h>

//zadanie 1
/*int suma(int a, int b, int c)
{
    int suma = a + b + c;
    return suma;
}
int main()
{
    int a = 31;
    int b = 29;
    int c = 31;
    int x;

    printf("Styczen %d  dni \n", a);
    printf("Luty %d  dni \n", b);
    printf("Marzec %d  dni \n", c);
    printf(" Suma dni tych miesiecy jest rowna:  \n", x = suma(a, b, c));
    printf("\n");


    return x;

}

//zadanie 2
int main()
{
    int suma = 0;
    for(int i = 1; i<=10; i++)
    {
        system("cls");
        printf("Suma 10-ciu pierwszych liczb calkowitych dodatnich: \n");
        suma += i;
        printf("%d \n", suma);
    }

    return suma;
}

//zadanie 3
int main()
{
    int iloczyn = 1;
    for(int i = 1; i<=10; i++)
    {
        system("cls");
        printf("Iloczyn 10-ciu pierwszych liczb calkowitych dodatnich: \n");
        iloczyn *= i;
        printf("%d \n", iloczyn);
    }

    return iloczyn;
}

//zadanie 4
int main()
{
    float rok1, rok2, rok3;
    float procent = 1000*6/100;

    printf("Saldo konta po 1 roku: \n");
    rok1 = 1000+procent;
    printf("%f \n", rok1);
    printf("\n");
    printf("Saldo konta po 2 roku: \n");
    rok2 = rok1+procent;
    printf("%f \n", rok2);
    printf("\n");
    printf("Saldo konta po 3 roku: \n");
    rok3 = rok2+procent;
    printf("%f \n", rok3);


    return rok3;
}



// zadanie 5
int main()
{
    printf(" +-----------+ \n");
    printf(" |   Java    | \n");
    printf(" +-----------+ \n");

    return 0;
}


// zadanie 6
int main()
{
    printf("  ///// \n");
    printf(" +'''''+ \n");
    printf("(| * * |) \n");
    printf("  | - | \n");
    printf(" | '-' | \n");
    printf(" +-----+ \n");

    return 0;
}

// zadanie 7
int main()
{
    printf(" ***   **      ***    ********    ***      **      **      ***     \n");
    Sleep(1000);
    printf(" ** *  **    **   **     **     **   **    **      **    **   **   \n");
    Sleep(1000);
    printf(" **  * **   ** *** **    **    ** *** **   **      **   ** *** **  \n");
    Sleep(1000);
    printf(" **   ***  **       **   **   **       **  ******  **  **       ** \n");
    Sleep(1000);
    printf("\n");
    printf(" ***   ***  **   **       ****  ****     **     **  ***   **       ****  **    **      ***      \n");
    Sleep(1000);
    printf(" ** * * **  **   **      **        **      **  **   ** *  **      **     **   **     **   **    \n");
    Sleep(1000);
    printf(" **  *  **  **   **     **          **       **     **  * **     **      ** **      ** *** **   \n");
    Sleep(1000);
    printf(" **     **    ***    ****            ****    **     **   ***  ****       **    **  **       **  \n");

    return 0;
}

//zadanie 8
int main()
{
    printf("    +    \n");
    printf("   + +   \n");
    printf("  +   +  \n");
    printf(" +-----+ \n");
    printf(" | .-. | \n");
    printf(" | | | | \n");
    printf(" +-+-+-+ \n");

    return 0;
}

// zadanie 9
int main()
{
   printf("       ____________         \n");
   printf("     /    HELLO     \\      \n");
   printf("    (     JUNIOR     )      \n");
   printf("    \\    CODER!    /       \n");
   printf("     \\   ______   /        \n");
   printf("      \\/       \\/         \n");
   printf("                            \n");
   printf(" (\\ //)          ()__()    \n");
   printf(" (='.'=)       ((  o  o ))  \n");
   printf("  ( _ )         \\ (**) //  \n");
   printf(" (`) (`)         //    \\   \n");
   printf("                 \\ __ //e  \n");
   printf("                   W  W     \n");

 return 0;
}

// zadanie 10
int main()
{
 int x;
 printf(" Wpisz 1 aby wyswietlic w kolejnych liniach ponumerowane pozycje z nazwiskami moich najlepszych przyjaciol: \n");
 scanf("%d", &x);
 switch(x)
 {
 case 1:
    printf(" 1. Szymanska \n");
 case 2:
    printf(" 2. Lubczynska \n");
 case 3:
    printf(" 3. Gawronska \n");
 }

    return 0;
}

//zadanie 11
int main()
{
     Sleep(1000);
     printf("                    +--------------+  \n");
     printf("                    |   PROSPEKT   |  \n");
     printf("                    +--------------+  \n");
     printf("                   Wislawa Szymborska \n");
 Sleep(1000);
 printf("\n");
 printf("                   Jestem pastylka na uspokojenie,\n");
 printf("                   Dzialam w mieszkaniu,\n");
 printf("                   skutkuje w urzedzie,\n");
 printf("                   siadam do egzaminow,\n");
 printf("                   staje na rozprawie,\n");
 printf("                   starannie sklejam rozbite garnuszki -\n");
 printf("                   tylko mnie zazyj,\n");
 printf("                   rozpusc pod jezykiem,\n");
 printf("                   tylko mnie polknij,\n");
 printf("                   tylko popij woda.\n");
 printf("                   Wiem, co robic z nieszczesciem,\n");
 printf("                   jak zniesc zla nowine,\n");
 printf("                   zmniejszyc niesprawiedliwosc,\n");
 printf("                   rozjasnic brak Boga,\n");
 printf("                   dobrac do twarzy kapelusz zalobny.\n");
 printf("                   Na co czekasz -\n");
 printf("                   zaufaj chemicznej litosci.\n");
 Sleep(3000);
 printf("\n");
 printf("                   Jestes jeszcze mlody,\n");
 printf("                   powinienes urzadzic sie jakos.\n");
 printf("                   Kto powiedzial, ze zycie ma byc odwaznie przezyte?\n");
 Sleep(2000);
 printf("\n");
 printf("                   Oddaj mi swoja przepasc -\n");
 printf("                   wymoszcze ja snem,\n");
 printf("                   bedziesz mi wdzieczny\n");
 printf("                   za cztery lapy spadania.\n");
 Sleep(2000);
 printf("\n");
 printf("                   Sprzedaj mi swoja dusze.\n");
 Sleep(1000);
 printf("                   Inny sie kupiec nie trafi.\n");
 Sleep(1000);
 printf("\n");
 printf("                   Innego diabla juz nie ma.\n");

    return 0;
}

// zadanie 12
int main()
{

    printf("                    *  *  *  * =============\n");
    Sleep(1000);
    printf("                     *  *  *   =============\n");
    Sleep(1000);
    printf("                    *  *  *  * =============\n");
    Sleep(1000);
    printf("                     *  *  *   =============\n");
    Sleep(1000);
    printf("                    ========================\n");
    Sleep(1000);
    printf("                    ========================\n");
    Sleep(1000);
    printf("                    ========================\n");

    return 0;
}
*/

//ZADANIE 1.2.2
/*int main()
{
    printf("Bardzo \n dlugi \n napis \n");
    return 0;
}*/

//ZADANIE 1.2.3
/*int main()
{
    printf("Napis zawierajacy rozne dziwne znaczki // \\ $ & % \n");
    return 0;
}*/

//ZADANIE 1.2.4
/*int main()
{
    printf("Wpisz liczbe calkowita: \n");
    int x;
    scanf("%d", &x);
    printf("%d", x);
    return 0;
}*/

