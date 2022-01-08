#include<stdio.h>
int main()
{
    int i,j;
    printf("enter small number");
    scanf("%d",&i);
    printf("\nenter large number");
    scanf("%d",&j);
    for(i=i;i<=j;i++)
    {
        printf("\n%d",i);
    }
    return(0);
}