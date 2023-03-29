#include<stdio.h>
#include<stdlib.h>

int main()
{
double first[3];
double second[3];
double fin[6];

int i, j;

double a, b, c, d, e, f;
printf("------------------------------\n");
printf("Enter the first array's values\n");
printf("------------------------------\n");

printf("Enter a number: ");
scanf("%lf", &a);
printf("Enter a number: ");
scanf("%lf", &b);
printf("Enter a number: ");
scanf("%lf", &c);

first[0] = a;
first[1] = b;
first[2] = c;

printf("------------------------------\n");
printf("Enter the second array's values\n");
printf("------------------------------\n");

printf("Enter a number: ");
scanf("%lf", &d);
printf("Enter a number: ");
scanf("%lf", &e);
printf("Enter a number: ");
scanf("%lf", &f);

second[0] = d;
second[1] = e;
second[2] = f;

for (i = 0; i<3; i++)
    fin[i] = first[i];

for (i = 0, j=3; j < 6 && i < 3; i++, j++)
    fin[j] = second[i];

printf("\nThe merged array is [");

for (i=0; i < 6; i++)
    printf("%.2lf, ", fin[i]);

printf("].");






}