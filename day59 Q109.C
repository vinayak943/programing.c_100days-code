/*Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.*/

#include <stdio.h>

int main()
            {
    int n, k, i, j, maxSum = 0, sum;
    int arr[100];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter size of subarray (k): ");
    scanf("%d", &k);

    maxSum = 0;
    for(i = 0; i <= n - k; i++)
    {
        sum = 0;
        for(j = i; j < i + k; j++)
        {
            sum += arr[j];
        }
        if(sum > maxSum)
            maxSum = sum;
    }

    printf("Maximum sum of subarrays of size %d = %d\n", k, maxSum);

    return 0;
}
