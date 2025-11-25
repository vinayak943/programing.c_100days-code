/*Show that enums store integers by printing assigned values.*/

#include <stdio.h>

enum Numbers {
    A = 5,
    B = 10,
    C = 15,
    D = 20
};

int main() {

    printf("A = %d\n", A);
    printf("B = %d\n", B);
    printf("C = %d\n", C);
    printf("D = %d\n", D);

    return 0;
}

