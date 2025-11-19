/*Experiment 6: Array
6.1. WAP to read a list of integers and store it in a single dimensional array. Write a C program to print the second largest integer in a list of integers.*/

#include <stdio.h>

int main()
{
    int arr[100], n, i;
    int largest, second;

    printf("Name   : vinayak\n");
    printf("SAP_ID : 590029509\n");
    printf("Course : BCA\n");
    printf("Batch  : 5\n");
    printf("-----------------------------\n\n");

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d integers:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    largest = second = arr[0];

    for(i = 0; i < n; i++)
    {
        if(arr[i] > largest)
        {
            second = largest;
            largest = arr[i];
        }
        else if(arr[i] > second && arr[i] != largest)
        {
            second = arr[i];
        }
    }

    printf("\nThe second largest number is: %d\n", second);

    return 0;
}

