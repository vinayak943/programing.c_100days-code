/*Store employee data in a binary file using fwrite() and read using fread().*/

#include <stdio.h>

struct Employee {
    char name[50];
    int id;
    float salary;
};

int main() {

    struct Employee e[3];
    FILE *fp;
    int i;

    printf("Enter details of 3 employees:\n");

    for(i = 0; i < 3; i++) {
        printf("\nEmployee %d:\n", i+1);

        printf("Name: ");
        scanf("%s", e[i].name);

        printf("ID: ");
        scanf("%d", &e[i].id);

        printf("Salary: ");
        scanf("%f", &e[i].salary);
    }

    // ------- Writing to Binary File -------
    fp = fopen("employees.dat", "wb");

    if(fp == NULL) {
        printf("Unable to open file for writing.\n");
        return 0;
    }

    fwrite(e, sizeof(struct Employee), 3, fp);

    fclose(fp);

    printf("\nData stored successfully in employees.dat\n");


    // ------- Reading Back -------
    fp = fopen("employees.dat", "rb");

    if(fp == NULL) {
        printf("Unable to open file for reading.\n");
        return 0;
    }

    fread(e, sizeof(struct Employee), 3, fp);

    fclose(fp);

    printf("\n----- Employee Records From File -----\n");

    for(i = 0; i < 3; i++) {
        printf("\nEmployee %d:\n", i+1);
        printf("Name: %s\n", e[i].name);
        printf("ID: %d\n", e[i].id);
        printf("Salary: %.2f\n", e[i].salary);
    }

    return 0;
}

