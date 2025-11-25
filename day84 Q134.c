/*Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.*/

#include <stdio.h>

enum Status {
    SUCCESS,
    FAILURE,
    TIMEOUT
};

int main() {
    enum Status s;

    printf("Enter status (0=SUCCESS, 1=FAILURE, 2=TIMEOUT): ");
    scanf("%d", &s);

    if(s == SUCCESS) {
        printf("Operation Completed Successfully.\n");
    }
    else if(s == FAILURE) {
        printf("Operation Failed.\n");
    }
    else if(s == TIMEOUT) {
        printf("Operation Timed Out.\n");
    }
    else {
        printf("Invalid Input!\n");
    }

    return 0;
}

