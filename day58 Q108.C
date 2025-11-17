/*Write a Program to take an integer array nums. Print an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i].
The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.*/

#include <stdio.h>

int main()
            {
    int n, i, j;
    int arr[100], result[100];


    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++)
    {
        int prod = 1;
        for(j = 0; j < n; j++)
        {
            if(i != j)
                prod *= arr[j];
        }
        result[i] = prod;
    }

    printf("Resultant Array:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", result[i]);
    }

    printf("\n");
    return 0;
}

