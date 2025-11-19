/*Experiment 2:Operators 
4. Write a program to find the root of the quadratic equations*/ 
#include <stdio.h> 
#include <math.h> 
int main() { 

 float a, b, c, d, root1, root2; 
printf("Name- vinayak\nSAP_ID 
590029509\nCourseBCA\nBatch-5");  
printf("\n--------------------------------------\n");  
printf("Enter values of a, b and c: "); 
scanf("%f %f %f", &a, &b, &c); 
d = b*b - 4*a*c; 
if (d > 0) { 
root1 = (-b + sqrt(d)) / (2*a); 
root2 = (-b - sqrt(d)) / (2*a); 
printf("Roots are: %.2f and %.2f\n", root1, root2); 
} 
else if (d == 0) { 
root1 = root2 = -b / (2*a); 
printf("Both roots are: %.2f\n", root1); 
} 
else { 
printf("Roots are imaginary (not real).\n"); 
} 
return 0; 
} 
