/*Write a program to take an integer array arr and an integer k as inputs. The task is to find the kth smallest element in the array.
Print the kth smallest element as output.*/

#include <stdio.h>

// Simple swap function
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSort(int arr[], int n) {
    for(int i = 0; i < n-1; i++) {
        for(int j = 0; j < n-1-i; j++) {
            if(arr[j] > arr[j+1]) {
                swap(&arr[j], &arr[j+1]);
            }
        }
    }
}

int main() {
    int n, k;
    scanf("%d", &n);

    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &k);

    bubbleSort(arr, n);

    if(k <= 0 || k > n) {
        printf("Invalid k\n");
        return 0;
    }

    printf("%d\n", arr[k-1]); 

    return 0;
}

