/*Experiment 6: Array
6.3. WAP to read a list of integers and store it in a single dimensional array. Write a C program to find the frequency
of a particular number in a list of integers.*/

#include <stdio.h>

int main()
{
    int arr[50];      
    int n, i, num;   
    int count = 0;   

    printf("Name   : vinayak\n");
    printf("SAP_ID : 590029509\n");
    printf("Course : BCA\n");
    printf("Batch  : 5\n");
    printf("-----------------------------\n\n");

    printf("How many numbers do you want to enter? ");
    scanf("%d", &n);

    printf("Enter %d numbers:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\nEnter the number you want to find frequency of: ");
    scanf("%d", &num);

    for(i = 0; i < n; i++)
    {
        if(arr[i] == num)
        {
            count = count + 1;
        }
    }


    printf("\nThe number %d appears %d time(s) in the list.\n", num, count);

    return 0;
}

