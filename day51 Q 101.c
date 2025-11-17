/*Write a Program to take a sorted array(say nums[]) and an integer (say target) as inputs. The elements in the sorted array might be repeated.
You need to print the first and last occurrence of the target and print the index of first and last occurrence. Print -1, -1 if the target is not present.*/

#include <stdio.h>

int main()
            {
    int n, i, target;
    int arr[100];
    int first = -1, last = -1;
    
    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements of the sorted array:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter target element: ");
    scanf("%d", &target);

    for(i = 0; i < n; i++)
    {
        if(arr[i] == target)
        {
            if(first == -1)
                first = i;
            last = i;
        }
    }

    if(first == -1)
        printf("-1 -1\n");
    else
        printf("%d %d\n", first, last);

    return 0;
}

