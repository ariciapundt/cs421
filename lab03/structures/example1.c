#include<stdio.h>
#include<stdlib.h>

int main()
{

    typedef struct {
        int x;
        int y;

    }  point;

    typedef struct {
        char * brand;
        int model;
    } vehicle;

    vehicle mycar;
    mycar.brand = "Ford";
    mycar.model = 2007;
    
}