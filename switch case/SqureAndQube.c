#include <stdio.h>
int main()
{
    int op,a, b, c;
    printf("\nEnter opretion: ");
    scanf("%d", &op);
    printf("\nenter number a=");
    scanf("%d", &a);
    b = a * a;
    c = a * a * a;

    if (a == 1 || a == 0)
    {

        if (a == 0)
        {
            printf("out=%d", 0);
        }
        if (a == 1)
        {
            printf("out=%d", 1);
        }
    }
    else
    {
        switch (op)
        {
        case 2:
            printf("out=%d", b);
            break;
        case 3:
            printf("out=%d", c);

            break;

        default:
            printf("op is not velid");
            break;
        }
    }
    return (0);
}
