#include <stdio.h>
#include <stdlib.h>

int ostatnia_cyfra(int n)
{
    return n%10;
}
int main()
{
    int n;
    scanf("%d", &n);
    printf("Ostatnia cyfra argumentu to: ");
    printf("%d", ostatnia_cyfra(n));
    return 0;
}

