#include<stdio.h>
#include<stdlib.h>

int main()
{
    char str[256];
    int a;
    printf("Input a number: ");
    fgets(str, 256, stdin);

    a = atoi(str);
    int b = a + 5;
    printf("The new value is: %d \n", b);

}