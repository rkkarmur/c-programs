/* #include <stdio.h>
int main()
{
    int  a, b;
    char op;
    while (op != '@')
    {
        printf("\nEnter operation: ");
        scanf("%s", &op);
        printf("Enter 1st no: ");
        scanf("%d", &a);
        printf("\nEnter 2st no: ");
        scanf("%d", &b);

        switch (op)
        {
        case '+':

            printf("%d %c %d = %d", a, op, b, a + b);
            break;

        case '-':

            printf("%d %c %d = %d", a, op, b, a - b);
            break;

        case '*':

            printf("%d %c %d = %d", a, op, b, a * b);
            break;

        case '/':

            printf("%d %c %d = %d", a, op, b, a / b);
            break;

        default:
            printf("op is not velid");
            break;
        }
    }
    return (0);
}  
*/




#include <stdio.h>
int main()
{
    int  a, b,exit=1;
    char op;
    while (exit==1)
    {
        printf("\nEnter operation: ");
        scanf("%s", &op);
      
        switch (op)
        {
         case 'A':
            printf("thanks for use rk program");
            exit=0;
            break;
        case '+':
        
            rk(&a,&b) ;
            printf("%d %c %d = %d", a, op, b, a + b);
            break;

        case '-':
            rk(&a,&b) ;
            printf("%d %c %d = %d", a, op, b, a - b);
            break;

        case '*':
            rk(&a,&b) ;
            printf("%d %c %d = %d", a, op, b, a * b);
            break;

        case '/':
            rk(&a,&b) ;
            printf("%d %c %d = %d", a, op, b, a / b);
            break;
         
           

        default:
            printf("op is not velid");
            break;
      }
    }
    return (0);
}

void rk(int *a,int *b) {
  printf("Enter 1st no: ");
        scanf("%d", a);
        printf("\nEnter 2st no: ");
        scanf("%d", b);
        

}