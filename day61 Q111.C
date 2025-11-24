/*Write a program to take an integer array arr and an integer k as inputs. The task is to find the first negative integer in each subarray of size k moving
from left to right. If no negative exists in a window, print "0" for that window. Print the results separated by spaces as output.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void printFirstNegative(int arr[], int n, int k) {
    if (n <= 0 || k <= 0 || k > n) {
        return;
    }

    int deque[n];
    int front = 0; 
    int rear = 0;  
    for (int i = 0; i < k; i++) {
        // If the element is negative, add its index to the back of the deque
        if (arr[i] < 0) {
            deque[rear++] = i;
        }
    }

    // Print result for the first window (ends at k-1)
    if (front != rear) {
        // Deque is not empty, the index at the front points to the first negative
        printf("%d ", arr[deque[front]]);
    } else {
        // Deque is empty, no negative number in the window
        printf("0 ");
    }

    for (int i = k; i < n; i++) {

        if (front != rear && deque[front] == i - k) {
            front++;
        }

        if (arr[i] < 0) {
            deque[rear++] = i;
        }
        if (front != rear) {
            printf("%d ", arr[deque[front]]);
        } else {
            printf("0 ");
        }
    }

    printf("\n");
}

int main() {
 
    int arr[] = {12, -1, -7, 8, -15, 30, 16, 28};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;

    printFirstNegative(arr, n, k);

    return 0;
}
