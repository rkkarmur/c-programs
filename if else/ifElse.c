#include<stdio.h>
 
int main() {
   int a, b, A,B,d;
 
   printf("\nEnter two no: ");
   scanf("%d %d", &a, &b);
   scanf("%d", &d);
 
    A=a + b;
    B= a-b;
    if(d==1){
     printf("out= %d", A);
    }
    
else if(d==2){
          printf("out= %d", B);
       }
       else {
      
     printf("data not found");
       }
       

   return(0);
}