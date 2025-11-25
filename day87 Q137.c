/*Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.*/

#include <stdio.h>

enum Role {
    ADMIN = 1,
    USER,
    GUEST
};

int main() {
    enum Role r;

    printf("Select Role:\n");
    printf("1. ADMIN\n");
    printf("2. USER\n");
    printf("3. GUEST\n");
    printf("Enter your choice: ");
    scanf("%d", &r);

    if(r == ADMIN) {
        printf("Welcome Admin! Full access granted.\n");
    }
    else if(r == USER) {
        printf("Welcome User! Limited access granted.\n");
    }
    else if(r == GUEST) {
        printf("Welcome Guest! View-only access granted.\n");
    }
    else {
        printf("Invalid Choice!\n");
    }

    return 0;
}

