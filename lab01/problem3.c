#include<stdio.h>
#include<stdlib.h>

int main()
{
double arr[3];
double avg;
int i;

double a, b, c;
printf("Enter a number: ");
scanf("%lf", &a);
//printf("%lf", a);
printf("Enter a number: ");
scanf("%lf", &b);
printf("Enter a number: ");
scanf("%lf", &c);


arr[0] = a;
arr[1] = b;
arr[2] = c;

printf("\nThe array is [ ");
for( int i = 0; i < 3; i++)
    printf("%.2lf, ", arr[i]);
printf("].\n");

avg = ((arr[0]+arr[1]+arr[2])/3);
printf("The average of the array values is: %.2lf", avg);



    



}