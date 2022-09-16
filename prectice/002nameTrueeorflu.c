#include <stdio.h>

int main()
{
    char a;
    printf("enter valid id:");
    scanf("%s", a);
    switch (a)
    {
    case "ajeet":
        /* code */
        break;
    
    default:
        break;
    }
    
    // if(a="ajeet" || a="divyes")
    // {
    //     printf(" id is valid");
    // }
    // else
    // {
    //     printf("id is invalid");
    // }

    return 0;
}

// #include<stdio.h>

// int main()
// {
// 	char *username;
//     printf("Enter the username: ");
// 	gets(username);
//     if(strcmp(username, "ajeet") == 0)
//     {
//         printf("user name is VALID");
//          break;
//     }
//     else if
//     {
//         printf("\nUsername entered is invalid %d",username);
//     }
//    return 0;
// }