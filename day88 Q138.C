/*Print all enum names and integer values using a loop.*/

#include <stdio.h>

typedef enum {
    RED = 1,
    GREEN,
    BLUE,
    COLOR_COUNT   // helper: number of colors
} Color;

const char *ColorNames[] = {
    "RED",
    "GREEN",
    "BLUE"
};

int main(void) {
    for (int i = 0; i < COLOR_COUNT; i++) {
        int value = RED + i;                  // underlying int value
        printf("%s = %d\n", ColorNames[i], value);
    }
    return 0;
}


