/*Experiment 2: Operators  
2. WAP a C program to Convert temperature from Celsius 
to Fahrenheit using the formula: F = (C* 9/5) + 32.*/  
#include <stdio.h>  
int main()  
{  

float celsius, fahrenheit;  
printf("Name- vinayak\nSAP_ID 590029509\nCourseBCA\nBatch-5");  
printf("\n--------------------------------------\n");  
printf("Enter temperature in Celsius: ");     
scanf("%f", &celsius);  
fahrenheit = (celsius * 9 / 5) + 32;  
printf("%.2f Celsius = %.2f Fahrenheit\n", celsius, 
fahrenheit);  
return 0;  
}
