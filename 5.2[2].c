/*Experiment 5: Variable and Scope of Variable
5.2. Declare a local variable inside a function and try to access it outside the function. Compare this with accessing
 the global variable from within the function.*/


#include <stdio.h>

int globalVar = 100;

void localExample();

int main(){
   
    printf("Name   : vinayak\n");
    printf("SAP_ID : 590029509\n");
    printf("Course : BCA\n");
    printf("Batch  : 5\n");
    printf("-----------------------------\n\n");

    printf("Inside main(): globalVar = %d\n", globalVar);


    localExample();

    printf("\nBack in main(): globalVar is still accessible = %d\n", globalVar);

    return 0;
}

void localExample()
{

    int localVar = 50;

    printf("Inside localExample(): localVar = %d\n", localVar);
    printf("Inside localExample(): globalVar = %d\n", globalVar);
}

