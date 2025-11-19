/*Experiment 3: Conditional Statements   
3.5. According to the Gregorian calendar, it was Monday on the date 01/01/01.  
If any year is input through the keyboard write a program to find out what is  
the day on 1st January of this year.*/   
#include <stdio.h>  int 
isLeap(int year)    
{   
if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))   
        return 1;       
    return 0;   
}   
  
int main()    
{   
    int year, i, days = 0, dayIndex;   
  
    printf("Name   : vinayak
\n");          printf("SAP_ID : 
590029509\n");          printf("Course : 
BCA\n");          printf("Batch  : 5\n");          
printf("-----------------------------\n\n");       
  
     
    printf("Enter year: ");          
scanf("%d", &year);   
    
    for (i = 1; i < year; i++)    
    {          if 
(isLeap(i))                          
days += 2;     
        else               
            days += 1;    
}   
dayIndex = days % 7;   
printf("\nOn 01/01/%d, it was ", year);   
if (dayIndex == 0)                  
printf("Monday\n");          
if (dayIndex == 1)                  
printf("Tuesday\n");          
if (dayIndex == 2)                  
printf("Wednesday\n");          
else if (dayIndex == 3)                  
printf("Thursday\n");          
else if (dayIndex == 4)                  
printf("Friday\n");          
(dayIndex == 5)                  
printf("Saturday\n");   
else   
printf("Sunday\n");      
return 0;   
}  
