/*Experiment 4: Loops   
4.2. WAP to print the multiplication table of the number entered by the user. It should be in the 
correct formatting. Num * 1 = Num*/   
   
   
#include <stdio.h> int main()    
{   
    int num, i;   
   
    printf("Name   : vinayak\n");      
printf("SAP_ID  :  590029509\n");      
printf("Course  :  BCA\n");      
printf("Batch  : 5\n");     printf("---------- -------------------\n\n");   
   
    printf("Enter a number to print its multiplication table: ");      
scanf("%d", &num);   
   
    printf("\nMultiplication Table of %d\n", num);   
    printf("-----------------------------\n");   
   
    for (i = 1; i <= 10; i++) {   
        printf("%d * %d = %d\n", num, i, num * i);   
    }   
printf("-----------------------------\n");   
return 0;   
}  
