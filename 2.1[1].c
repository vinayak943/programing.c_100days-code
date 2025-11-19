/*Experiment 2: Operators  
1. Write a C program to calculate the area and perimeter of a 
rectangle based on its length and width.*/  
#include <stdio.h> int 
main() 
{  

    float length, width, area, perimeter;
     
	printf("Name- vinayak\nSAP_ID 5900209509\nCourse);
    BCA\nBatch-5");  
    printf("\n--------------------------------------\n");  
    printf("Enter the length of the rectangle: ");     
    scanf("%f", &length);  
    printf("Enter the width of the rectangle: ");     
    scanf("%f", &width);  
    area = length * width;     
    perimeter = 2 * (length + width);  
    printf("Area of the rectangle = %.2f\n", area);  
    printf("Perimeter of the rectangle = %.2f\n", perimeter);    
    
	return 0;
} 
