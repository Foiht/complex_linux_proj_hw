#include <stdio.h> 
#include <stdlib.h>
#include "header.h"


int main()  
{  
    int num1, num2;
    char option;
    float result;

    printf("Choose an operator(+, -, *, /) for the calculation: ");  
    if (scanf("%c", &option) != 1) { printf("Error to read operator.\n"); exit(1); };
    if (option == '+' )  { printf("Selected operation: Addition"); }
    else if (option == '-')  { printf("Selected operation: Subtraction"); }
    else if (option == '*')  { printf("Selected operation: Multiplication"); }
    else if (option == '/')  { printf("Selected operation: Division"); }
    else { printf("Error: Selected the unknown operation.\n"); exit(1); }
   
    printf ("\n\nEnter two numbers.\nFirst number: ");  
    if (scanf(" %d", &num1) != 1) { printf("Error: Expected only integer values\n"); exit(1); };
    printf ("Second number: ");  
    if (scanf (" %d", &num2) != 1) { printf("\nError: Expected only integer values\n"); exit(1); };
      
    switch(option)  
    {  
        case '+':  
            addition_func(num1, num2); 
            break;  
          
        case '-':
            subtraction_func(num1, num2);
            break;  
              
        case '*': 
            multiplication_func(num1, num2);
            break;            
          
        case '/': 
            division_func(num1, num2);
            break;
        default: 
            printf("Error: Please check the inputs\n");               
    }  
    return 0;  
}
