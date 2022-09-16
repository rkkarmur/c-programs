// #include <stdio.h>

// struct Books
// {
//     char title[20];
//     char author[100];
//     float price;
//     int pages;
// };

// int main()
// {
//     struct Books book1;
//     return 0;
// }

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct employ
{
    int id;
    char name[20];
    char desgnination[20];
    int salary;
};

int main()

{

    int id, salary;
    char name[20];
    char desgnination[20];
    printf("enter amploy id :");
    scanf("%d", &id);

    printf("enter amploy name :");
    scanf("%s", name);

    printf("enter amploy desgnination :");
    scanf("%s", desgnination);

    printf("enter amploy salary :");
    scanf("%d", &salary);

    struct employ amploy1 = {id, "", "", salary};
    strcpy(amploy1.name, name);
    strcpy(amploy1.desgnination, desgnination);
    printf("%d\n", amploy1.id);
    printf("%s\n", amploy1.name);
    printf("%s\n", amploy1.desgnination);
    printf("%d\n", amploy1.salary);
    return (0);
    // #include <stdio.h>
    // #include<string.h>

    // struct amploy
    // {
    //     char name[20];
    //     char desgnination[100];
    //     float salary;
    //     int id;
    // };

    // int main()
    // {
    //     struct amploy amploy1 = {"ramesh", "CIVIL ENG", 120, 300};
    //     printf("%s\n", amploy1.name);
    //     printf("%s\n", amploy1.desgnination);
    //     printf("%f\n", amploy1.salary);
    //     printf("%d\n", amploy1.id);
    //     return 0;
    // }
