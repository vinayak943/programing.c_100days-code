/*Experiment 3: Conditional Statements  
3.3. WAP to compute the BMI Index of the person and print the BMI 
values as per the following ranges. You can use the following formula to 
compute   
BMI= weight(kgs)/Height(Mts)*Height(Mts).*/  
#include <stdio.h> int 
main()   
{  
printf("Name- vinayak\nSAP_ID-590029509\nCourse 
BCA\nBatch-5");  
printf("\n--------------------------------------\n");  
f
 loat weight, height, bmi;  
printf("Enter weight in kg: ");     
scanf("%f", &weight);     printf("Enter 
height in meters: ");     scanf("%f", 
&height);  
bmi = weight / (height * height);  
printf("Your BMI is: %.2f\n", bmi);  
if (bmi < 15)  
printf("Category: Starvation\n");     
else if (bmi <= 17.5)         
printf("Category: Anorexic\n");     else if 
(bmi <= 18.5)         
printf("Category: 
Underweight\n");     else if (bmi <= 
24.9)         
printf("Category: Ideal\n");     
else if (bmi <= 25.9)         
printf("Category: Overweight\n");     
else if (bmi <= 39.9)         
printf("Category: Obese\n");     else  
printf("Category: Morbidly Obese\n");  
return 0;  
} 
