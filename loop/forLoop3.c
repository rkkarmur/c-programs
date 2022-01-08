#include <stdio.h>
int main()
{
    int i, j, k;
    printf("Enter an small number: ");
    scanf("%d", &j);
    printf("Enter an large number: ");
    scanf("%d", &k);
    printf("Even number: ");
    for (i = j; i <= k; i++)
    {
        if (i % 2 == 0)
        {
            printf("\n%d", i);
        }
    }
    printf("\nOdd number: ");

    for (i = j; i <= k; i++)
    {
        if (i % 2 != 0)
        {
            printf("\n%d", i);
        }
    }
    return 0;
}