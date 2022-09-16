#include <stdio.h>

int main()
{
    int a[] = {25, 50, 75, 100};
    int n;
    printf("enter nuber: ");
    scanf("%d", &n);

    switch (n)
    {
    case 25:

        printf("%d id in nubmber which in aray", a[0]);
        break;
    case 50:

        printf("%d id in nubmber which in aray", a[1]);
        break;
    case 75:

        printf("%d id in nubmber which in aray", a[2]);
        break;
    case 100:

        printf("%d id in nubmber which in aray", a[3]);
        break;

    default:
        printf("number is not in array");
        break;
    }
    return 0;
}