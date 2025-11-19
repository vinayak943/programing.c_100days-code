/*Experiment 3: Conditional Statements   
3.4. WAP to check if three points (x1,y1), (x2,y2) and (x3,y3) 
are collinear or not.*/   
#include <stdio.h>   
int main()    
{      
y3;          
int x1, y1, x2, y2, x3, 
int area;   
printf("Name:   
vinayak\n");          
590026959\n");          
BCA\n");          
: 

printf("SAP_ID : 590029509);
printf("Course : 
printf("Batch  : 5\n");          
printf("-----------------------------\n\n");   
printf("Enter coordinates of first point (x1 y1): ");          
scanf("%d %d", &x1, &y1);   
printf("Enter coordinates of second point (x2 y2): ");          
scanf("%d %d", &x2, &y2);   
printf("Enter coordinates of third point (x3 y3): ");          
scanf("%d %d", &x3, &y3);   
area = x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2);   
if (area == 0)          
COLLINEAR.\n");   
else   
printf("\nThe points are 
printf("\nThe points are NOT COLLINEAR.\n");      
return 0;   
}  
