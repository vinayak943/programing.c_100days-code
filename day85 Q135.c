/*Assign explicit values starting from 10 and print them.*/

#include <stdio.h>

enum Status {
    SUCCESS = 10,
    FAILURE,
    TIMEOUT,
    CANCELLED,
    UNKNOWN
};

int main() {
    enum Status s;

    printf("Enum Values:\n\n");

    printf("SUCCESS  = %d\n", SUCCESS);
    printf("FAILURE  = %d\n", FAILURE);
    printf("TIMEOUT  = %d\n", TIMEOUT);
    printf("CANCELLED = %d\n", CANCELLED);
    printf("UNKNOWN   = %d\n", UNKNOWN);

    return 0;
}

