#include <stdio.h>
int main()
{
    printf("*****OPERATORS IN C*****");

    // ARITHMETIC OPERATORS(+,-,*,/,%,++a,a++,a--,--a)

    int a = 2, b = 7, c = 8, A = 5, B = 3, se = 4;
    // se +=4;
    printf("The sum of a and b\n%d\n", a + b);
    printf("The sub of a and b\n%d\n", a - b);
    printf("The mult of a and b\n%d\n", a * b);
    printf("The div of a and b\n%d\n", a / b);
    printf("The mod of a and b\n%d\n", a % b);
    printf("The sum of a and b\n%d\n", a + b);
    printf("The pre increment of a\n%d\n", ++a);
    printf("The post increment of a\n%d\n", a++);
    printf("The post decrement of a\n%d\n", a--);
    printf("The pre decrement of a\n%d\n", --a);

    // RELATIONAL OPERATORS(==,!=,>,>=,<,=<)

    printf("a is equal to b\n%d\n", a == b);
    printf("a is not equal to b\n%d\n", a != b);
    printf("a is greater then  b\n%d\n", a > b);
    printf("a is greater than equal to b\n%d\n", a >= b);
    printf("a is less than b\n%d\n", a < b);
    printf("a is less than equal to b\n%d\n", a <= b);

    // LOGICAL OPERATORS(&&,||,!)

    int h = 0, j = 1;
    printf("and operator\n%d\n", h && j);
    printf("or operator\n%d\n", h || j);
    printf("not of\n%d\n", !h);
    printf("not of\n%d\n", !j);

    // BITWISE OPERATOR(&,~,^,/,<<,>>)=it works bit by bit

    printf("bitwise operator return\n%d\n", A & B);
    printf("bitwise operator return\n%d\n", A / B);
    printf("bitwise operator return\n%d\n", ~A);
    printf("bitwise operator return\n%d\n", ~B);
    printf("bitwise operator return\n%d\n", A << B);
    printf("bitwise operator return\n%d\n", A >> B);

    // ASSIGNMENT OPERATOR(==,+=,-=,*=,%= ETC)

    se += 4;
    printf("se is \n%d\n", se);
    se -= 4;
    printf("se is \n%d\n", se);
    se *= 4;
    printf("se is \n%d\n", se);
    se /= 4;
    printf("se is \n%d\n", se);
    se %= 4;
    printf("se is \n%d\n", se);

    /*MICELLANEOUS OPERATOR(&,*,?:)
    &(IT RETURNS VARIABLE ADDRESS)
    *(IT RETURNS VALUE OF ANY ADDRESS)
    ?:(CONDITIONAL STATEMENT)*/

    return 0;
}