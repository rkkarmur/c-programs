#include <stdio.h>

float sum(float a, float b);
float sub(float a, float b);
float mul(float a, float b);
float div(float a, float b);
float mod(float a, float b);

int main()
{
    char op;
    float a, b, c=0.0f;


    printf("\nEnter opretion: ");
    scanf("%c", &op);
    printf("Enter 1st no: ");
    scanf("%f", &a);
    printf("\nEnter 2st no: ");
    scanf("%f", &b);

     scanf("%f %c %f", &a, &op, &b);

    
    
      switch (op)
    {
    case '+':

        c= sum(a, b);
    
        break;

    case '-':

        c= sub(a, b);
        break;

    case '*':

        c= mul(a, b);
        break;

    case '/':

        c= div(a, b);
        break;

    default:
        printf("op is not velid");
        break;
    }
    printf("%f %c %f = %f", a, op,b, c);

    return (0);
}