/*Experiment 3: Conditional Statements   
3.6. WAP using ternary operator, the user should input the length and breadth  of 
a rectangle, one has to find out which rectangle has the highest perimeter.   The 
minimum number of rectangles should be three.*/   
#include <stdio.h>  int 
main()    
{   
int l1, b1, l2, b2, l3, b3;          
int p1, p2, p3, max;      
printf("Name   : vinayak\n");          
printf("SAP_ID : 
590026959\n");          
printf("Course : BCA\n");          
printf("Batch  : 5\n");          
printf("----------------------------
\n\n");   
printf("Enter length and breadth of Rectangle 1: ");          
scanf("%d %d", &l1, &b1);   
printf("Enter length and breadth of Rectangle 2: ");          
scanf("%d %d", &l2, &b2);   
printf("Enter length and breadth of Rectangle 3: ");          
scanf("%d %d", &l3, &b3);   
p1 = 2 * (l1 + b1);          
p2 = 2 * (l2 + b2);          
= 2 * (l3 + b3);   
p3 
max = (p1 > p2) ? ((p1 > p3) ? p1 : p3) : ((p2 > p3) ? p2 : p3);      printf("\nPerimeter of 
Rectangle 1 = %d\n", p1);          
printf("Perimeter of Rectangle 2 = %d\n", p2);          
printf("Perimeter of Rectangle 3 = %d\n", p3);   
printf("\nThe highest perimeter is %d\n", max);   
return 0;   
} 
