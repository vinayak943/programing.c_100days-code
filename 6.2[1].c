/*Experiment 6: Array
6.2. WAP to read a list of integers and store it in a single dimensional array. Write a C program to count and display positive, negative, odd, and
even numbers in an array.*/

#include <stdio.h>

int main()
{
    int arr[100], n, i;
    int positive = 0, negative = 0, even = 0, odd = 0;


    printf("Name   : vinayak\n");
    printf("SAP_ID : 590029509\n");
    printf("Course : BCA\n");
    printf("Batch  : 5\n");
    printf("-----------------------------\n\n");

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++)
    {
        if (arr[i] > 0)
            positive++;
        else if (arr[i] < 0)
            negative++;

        if (arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }
    
    printf("\nResults:\n");
    printf("Positive numbers: %d\n", positive);
    printf("Negative numbers: %d\n", negative);
    printf("Even numbers: %d\n", even);
    printf("Odd numbers: %d\n", odd);

    return 0;
}

