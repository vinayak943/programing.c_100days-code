/*Write a program to take an input array of size n. The array should contain all the integers between 0 to n except for one. Print that missing number*/

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    int i;

    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int expectedSum = n * (n + 1) / 2;
    int actualSum = 0;

    for(i = 0; i < n; i++) {
        actualSum += arr[i];
    }

    printf("%d\n", expectedSum - actualSum);

    return 0;
}

