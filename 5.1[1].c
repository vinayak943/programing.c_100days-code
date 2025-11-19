/*Experiment 5: Variable and Scope of Variable   
5.1. Declare a global variable outside all functions and use it inside various functions to 
understand its accessibility.*/   
#include <stdio.h> 
int number = 10; 
void display(); void 
modify(); int 
main()   
{       
printf("Name      
:  
vinayak  \n");     printf("SAP_ID :  
590029509\n");     printf("Course : BCA\n");     
printf("Batch  : 5\n");      
printf("-----------------------------\n\n");   
printf("Inside main(), number = %d\n", number);   
display();      
modify();         
return 0;   
}   
void display()   
display();      
{   
printf("Inside display(), number = %d\n", number);   
}   
void modify()   
{   
number = number + 20;     printf("Inside modify(), number is changed 
to %d\n", number);   
}    
