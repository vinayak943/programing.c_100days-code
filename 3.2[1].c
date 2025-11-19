/*Experiment 3: Conditional Statements  
3.2. WAP to check if the triangle is valid or not. If the validity is 
established,do check if the triangle is isosceles, equilateral, right angle, or 
scalene. Take sides of the triangle as input from a user*/  
#include <stdio.h> int 
main()   
{       
printf("Name- vinayak\nSAP_ID-590029509\nCourse 
BCA\nBatch-5");  
printf("\n--------------------------------------\n");  
f
 loat side1, side2, side3;  
printf("Enter three sides of the triangle: ");     
scanf("%f %f %f", &side1, &side2, &side3);  
if (side1 + side2 > side3 && side2 + side3 > side1 && side1 + side3 > 
side2)   
{  
printf("Triangle is valid.\n");  
if (side1 == side2 && side2 == side3)   
    {  
            printf("The triangle is equilateral.\n");  
        } else if (side1 == side2 || side2 == side3 || side1 == side3)  
     {  
            printf("The triangle is isosceles.\n");  
        } else if ((side1*side1 == side2*side2 + side3*side3) ||   
                   (side2*side2 == side1*side1 + side3*side3) ||   
                   (side3*side3 == side1*side1 + side2*side2))  
            {  
            printf("The triangle is right angled.\n");  
        } else {  
            printf("The triangle is scalene.\n");  
        }  
    } else {  
        printf("The given sides do not form a valid triangle.\n");  
    }  
  
    return 0;  
} 
