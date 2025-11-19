/*Experiment 4: Loops   
4.1. WAP to enter numbers till the user wants. At the end, it should display the count of positive, 
negative, and Zeroes entered.*/   
   
#include <stdio.h>   
   
int main()    
{   
    printf("Name   : vinayak\n");      
printf("SAP_ID  :  590029509\n");      
printf("Course  :  BCA\n");      
printf("Batch  : 5\n");     printf("---------- -------------------\n\n");   
   
    int num, choice;     int positive = 0, negative 
= 0, zero = 0;   
   
    do {          printf("Enter a 
number: ");          
scanf("%d", &num);   
   
        if (num > 0)             positive++;         
else if  
(num < 0)              
negative++;   
else   
zero++;   
printf("Do you want to enter another number? (1 = Yes / 0 = No): ");         
&choice);   
} while (choice == 1);   
printf("\nCount of positive numbers = %d", positive);     
printf("\nCount of negative numbers = %d", negative);     printf("\nCount 
of zeroes = %d\n", zero);   
return 0;   
}     
