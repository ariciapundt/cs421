#include<stdio.h>
#include<stdlib.h>

int main() {
    int a = 125, b = 12345;
    long ax = 1234567890;
    short s = 4043;
    float x = 2.13459;
    double dx = 1.1415927;
    char c = 'W';
    unsigned long ux = 2541567890;

    int add=a+c;
    printf("a + c = " "%d", add);

    int character = x + c;
    printf("\nx + c = " "%d", character);

    int ex = dx+x;
    printf("\ndx + x = " "%d", ex);

    int addition = dx + ax;
    printf("\n((int) dx) + ax = " "%d", addition);

    int add2 = a + x;
    printf("\na + x = " "%d", add2);

    int add3 = s + b;
    printf("\ns + b = " "%d", add3);

    int add4 = ax + b;
    printf("\nax + b = " "%d", add4);

    int add5 = s + c;
    printf("\ns + c = " "%d", add5);

    int add6 = ax + c;
    printf("\nax + c = " "%d", add6);

    unsigned long add7 = ax + ux;
    printf("\nax + ux = " "%lu", add7);



}