#include <stdio.h> 
#include <stdlib.h>
#include "func.h"


int main()  
{  
    int num1, num2;
    char option;

    printf("Choose an operator(+, -, *, /, !, √) for the calculation: ");  
    if (scanf("%c", &option) != 1) { printf("Error to read operator.\n"); exit(1); };
    if (option == '+' )  { printf("Selected operation: Addition"); }
    else if (option == '-')  { printf("Selected operation: Subtraction"); }
    else if (option == '*')  { printf("Selected operation: Multiplication"); }
    else if (option == '/')  { printf("Selected operation: Division"); }
    else if (option == '!')  { printf("Selected operation: Fuctorial"); }
    else if (option == '√')  { printf("Selected operation: Square root"); }
    else { printf("Error: Selected the unknown operation.\n"); exit(1); }
   

    switch(option)  
    {  
        case '+':  
            addition_func(); 
            break;  
          
        case '-':
            subtraction_func();
            break;  
              
        case '*': 
            multiplication_func();
            break;            
          
        case '/': 
            division_func();
            break;

        case '!': 
            fuctorial_func();
            break;

        case '√': 
            square_root_func();
            break;
        default: 
            printf("Error: Please check the inputs\n");               
    }  
    return 0;  
}
