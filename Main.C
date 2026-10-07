// first code
#include <stdio.h>
int main()
{
    // datatype

    int a = 8;
    float b = 9;
    double float1 = 9;
    long double float2 = 12;
    char c = 's';
    unsigned int integer = 5;
    short integer1 = 1;
    long integer2 = 10;

    // assigned values

    printf("integer datatype\n%d\n", a);
    printf("float datatype\n%f\n", b);
    printf("character datatype\n%c\n", c);
    printf("unsigned int datatype\n%d\n", integer);
    printf("short integer\n%d\n", integer1);
    printf("long integer\n%d\n", integer2);
    printf("double float datatype\n%f\n", float1);
    printf("long double float%f\n", float2);

    // size of datatype

    printf("the size of int is taken by\n%d\n", sizeof(int));
    printf("the size of float is taken by\n%d\n", sizeof(float));
    printf("the size of char is taken by\n%d\n", sizeof(char));
    printf("the size of unsigned int is taken by\n%d\n", sizeof(unsigned int));
    printf("the size of short int is taken by\n%d\n", sizeof(short int));
    printf("the size of long int is taken by\n%d\n", sizeof(long int));
    printf("the size of unsigned char is taken by\n%d\n", sizeof(unsigned char));
    printf("the size of  is double taken by\n%d\n", sizeof(double));
    printf("the size of long double is taken by\n%d\n", sizeof(long double));

    return 0;
}