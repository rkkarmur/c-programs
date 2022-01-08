#include <stdio.h>
int main()
{
   int a, b;
   char op;
   printf("Enter 1st no: ");
   scanf("%d", &a);
   printf("\nEnter 2st no: ");
   scanf("%d", &b);
   printf("\nEnter opretion: ");
   scanf("%s", &op);
   switch (op)
   {
   case '+': 
     
      printf("%d %c %d = %d", a, op, b, a+b);
      break;

   case '-': 
     
       printf("%d %c %d = %d", a, op, b, a-b);
      break;

   case '*': 
     
       printf("%d %c %d = %d", a, op, b, a*b);
      break;

   case '/': 
     
       printf("%d %c %d = %d", a, op, b, a/b);
      break;

   default:
   printf("op is not velid");
      break;
   }

   return (0);
}