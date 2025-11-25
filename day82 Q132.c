/*Define an enum for traffic lights (RED, YELLOW, GREEN) and print 'Stop', 'Wait', or 'Go' based on its value.*/

#include <stdio.h>

enum Signal {
    RED,
    YELLOW,
    GREEN
};

int main() {
    enum Signal light;

    printf("Enter light (0=RED, 1=YELLOW, 2=GREEN): ");
    scanf("%d", &light);

    if(light == RED) {
        printf("Stop\n");
    }
    else if(light == YELLOW) {
        printf("Wait\n");
    }
    else if(light == GREEN) {
        printf("Go\n");
    }
    else {
        printf("Invalid Input\n");
    }

    return 0;
}

