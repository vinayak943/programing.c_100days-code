/*Experiment 5: Variable and Scope of Variable   
5.3. Declare variables within different code blocks (enclosed by curly braces) and test their 
accessibility within and outside those blocks*/   
#include <stdio.h> int main()   
{   
printf("Name      
:  
vinayak\n");     printf("SAP_ID :  590029509\n");     printf("Course : BCA\n");     
printf("Batch  : 5\n");      
printf("-----------------------------\n\n");   
int x = 10;      printf("In main block: x 
= %d\n", x);     {         
int y = 20;          
printf("Inside inner block: x = %d\n",  
x);           
printf("Inside inner block: y  
= %d\n", y);     
}   
printf("\nBack in main block: x is still accessible = %d\n", x);   
{         
int z = 30;         
z = %d\n", z);   
}   
printf("\nInside another block: 
printf("\nVariables declared inside blocks cannot be accessed outside them.\n");   
return 0;   
}  
