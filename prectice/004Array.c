// #include <stdio.h>

// int main()
// {
//   int a[5];
//   int i;
//   printf("enter value 1 :");
//   scanf("")
//   for(i=0;i<4;i++)
//   {
//   printf("%d \n", a[i]);
//  }
//   return 0;
// }
#include <stdio.h>

int main()
{

    int i, j, n;
    int arr[5];

    for (j = 0; j < 5; j++)
    {
        printf("Enter %d number: ", j + 1);
        scanf("%d", &arr[j]);
    }
    printf("enter number which you need : ");
    scanf("%d", &n);

    for (i = 0; i < 5; i++)
    {
       
        if (n == arr[i])
        {
            printf("%d is in array", n);
            break;
        }
        else if(i==4)
        {
            printf("data not found");
        }
    }
    return 0;
}