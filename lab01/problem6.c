#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n, i;
    int arr[100];
    

    //user input
    printf("How many values to sort (<100)? ");
    scanf("%d", &n);

    //int *arr = malloc(n * sizeof(arr));

    for (i=0; i<n; i++)
    {
        printf("Enter a number: ");
        scanf("%d", &arr[i]);
    }   

    
    //sorting
    for (i=0; i<n; i++)
    {
        for( int j= i; j<n; j++ )
        {
            if (arr[i]>arr[j])
            {
                int temp = arr[i];
                arr[i]=arr[j];
                arr[j]= temp;
            }
        }
    }

    //display elements in array after sorting
    printf("The sorted numbers are: \n");
    for(i = 0; i< n; i++)
        printf("%d ", arr[i]);

}
