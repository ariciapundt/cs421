#include<stdio.h>
#include<stdlib.h>

int main()
{
    typedef struct {
        char * name;
        int age;

    
    } person;
    
    person john;
    john.name = "John";
    john.age = 27;

    printf("%s is %d years old.", john.name, john.age);
}