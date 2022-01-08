#include <stdio.h>
// int main()
// {
//     char id[10], pass[10];
//     printf("enter id:");
//     scanf("%s",id);
//     // gets(id)

//     printf("\nenter pass:");
//     scanf("%s", pass);
//     // gets(pass);
//     printf("----->%s", id);
//     if (!id)
//     {
//         printf("Error,enter user id");
//     }
//     else if (!pass)
//     {
//         printf("Error,enter password");
//     }
//     else if (strcmp(id, "ramesh") != 0)
//     {
//         printf("\nError,enter velied user id");
//     }
//     else if (strcmp(pass, "password") != 0)
//     {
//         printf("Error,enter velied user password");
//     }
//     else
//     {
//         printf("WELCOM TO RK CONSTRUCTION PLT.");
//     }
//     return (0);
// }

int main()
{
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