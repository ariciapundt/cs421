#include<stdio.h>

int main() {
    int height = 5;
    int width = 3;
    int area = (height * width);
    int perim = (height + height) + (width + width);

    printf("Perimeter of the rectangle = " "%d", perim);
    printf(" inches.");

    printf("\nArea of the rectangle = " "%d", area);
    printf(" square inches.");
}