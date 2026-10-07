#include <stdio.h>

int main()
{
    printf("*****************rules for creating variables****************");

    // int 6sejal;(not valid variable bcz variable never starts with number)
    // int _sejal,int sejalPatel;(this variable valid)

    int sejalPatel;  // variable declaration
    sejalPatel = 44; // variable initialization
    printf("%d\n", sejalPatel);

    const int i = 9; // constant keyword
    printf("%d\n", i);

    char five = 's'; // variable declaration and initialization in one step

    // USER INPUT (scanf("%d"),&); + typecasting

    int sejalinput;
    printf("\nplease enter the value of sejalinput");
    scanf("%d", &sejalinput);
    printf("%d\n", sejalinput);
    printf("%f\n", (float)sejalinput); // typecasting it converts one datatype to another datatype

    // devide two number

    int num1, num2;
    printf("\nenter the values of num1 and num2\n");
    scanf("%d", &num1);
    scanf("%d", &num2);
    printf("devide num1 and num2\n%d\n", num1 / num2);

    return 0;
}
