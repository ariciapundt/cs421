#include<stdio.h>
#include<stdlib.h>

int main()
{
    struct point {
        int x;
        int y;
    };

    int x = 10;
    int y = 5;
    draw(x, y);

    struct point p;
    p.x = 10;
    p.y = 5;
    draw(p);
    
    
}