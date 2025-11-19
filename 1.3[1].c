/*Experiment 1: Installation, Environment Setup, and starting with the C language 
3.Write a C program to add two numbers and take a number from the user.*/ 
 
#include <stdio.h> 
 
int main() {     int num1, num2, sum;     printf("Enter first number: ");     scanf("%d", &num1);     printf("Enter second number: ");     scanf("%d", &num2);     sum = num1 + num2; 
    printf("The sum of %d and %d is: %d\n", num1, num2, sum); 
 
    return 0; 
} 

