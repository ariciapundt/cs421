#include<stdio.h>
#include<stdlib.h>

int main()
{
    double sum = 0; 
    double nums[5];
    nums[0] = 5;
    nums[1] = 8;
    nums[2] = 10;
    nums[3] = 13;
    nums[4] = 19;

    printf("The array is [ ");
    for (int i = 0; i < 5; i++)
        printf("%.2f, ", nums[i]);
    printf("].\n");
    
    for (int i = 0; i < 5; i++)
        sum = sum + nums[i];
        printf("The sum of the array is: %.2f", sum);








}