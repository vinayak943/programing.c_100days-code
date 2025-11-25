/*Define a struct with enum Gender and print person's gender.*/

#include <stdio.h>

enum Gender {
    MALE = 1,
    FEMALE,
    OTHER
};

struct Person {
    char name[50];
    int age;
    enum Gender gender;
};

int main() {
    struct Person p;

    printf("Enter name: ");
    scanf("%s", p.name);

    printf("Enter age: ");
    scanf("%d", &p.age);

    printf("Enter Gender (1=MALE, 2=FEMALE, 3=OTHER): ");
    scanf("%d", &p.gender);

    printf("\n--- PERSON INFO ---\n");
    
    printf("Name: %s\n", p.name);
    printf("Age: %d\n", p.age);

    printf("Gender: ");
    
    if(p.gender == MALE)
        printf("MALE\n");
    else if(p.gender == FEMALE)
        printf("FEMALE\n");
    else if(p.gender == OTHER)
        printf("OTHER\n");
    else
        printf("Invalid value\n");

    return 0;
}

