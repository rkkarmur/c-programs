#include <stdio.h>
void sum(int, int);  
int main()
{

{  
    int a=1,b=2;   
    printf("\nHELLOW PLESE SELECT OPPTION:");  
    printf("\n enter 1 for login and 2 for singup:");  
    scanf("%d %d",&a,&b);  
       
}  
void sum(int a, int b)  
{  
    printf("\nThe sum is %d",a+b);      
}  

    char id[10], pass[10];
    printf("enter id:");
    scanf("%s",id);
    // gets(id)

    printf("\nenter pass:");
    scanf("%s", pass);
    // gets(pass);
    if (!id)
    {
        printf("Error,enter user id");
    }
    else if (!pass)
    {
        printf("Error,enter password");
    }
    else if (strcmp(id, "ramesh") != 0 || strcmp(pass, "password") !=0)
    {
        printf("Error, invelied credential");
    }
    
    else
    
    {
        printf("WELCOM TO RK CONSTRUCTION PLT.");
    }
    return (0);
}