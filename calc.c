#include <stdio.h> 
#include <stdlib.h>
#include "calc.h"


int main()  
{  
    int n1, n2;
    char option;

    printf("Choose an operator(+, -, *, /, !, r) for the calculation: ");  
    if (scanf("%c", &option) != 1) { printf("Error to read operator.\n"); exit(1); };
    if (option == '+' )  { printf("Selected operation: Addition"); }
    else if (option == '-')  { printf("Selected operation: Subtraction"); }
    else if (option == '*')  { printf("Selected operation: Multiplication"); }
    else if (option == '/')  { printf("Selected operation: Division"); }
    else if (option == '!')  { printf("Selected operation: Fuctorial"); }
    else if (option == 'r')  { printf("Selected operation: Square root"); }
    else { printf("Error: Selected the unknown operation.\n"); exit(1); }
   

    switch(option)  
    {  
        case '+':  
            printf ("\n\nEnter two numbers. \nFirst number: "); 
            if (scanf(" %d", &n1) != 1) { printf("Error: Expected only integer values\n"); exit(1); };
            printf ("Second number: ");  
            if (scanf (" %d", &n2) != 1) { printf("\nError: Expected only integer values\n"); exit(1); };
            addition_func(n1, n2); 
            break;  
          
        case '-':
            printf ("\n\nEnter two numbers. \nFirst number: "); 
            if (scanf(" %d", &n1) != 1) { printf("Error: Expected only integer values\n"); exit(1); };
            printf ("Second number: ");  
            if (scanf (" %d", &n2) != 1) { printf("\nError: Expected only integer values\n"); exit(1); };
            subtraction_func(n1, n2);
            break;  
              
        case '*': 
            printf ("\n\nEnter two numbers. \nFirst number: "); 
            if (scanf(" %d", &n1) != 1) { printf("Error: Expected only integer values\n"); exit(1); };
            printf ("Second number: ");  
            if (scanf (" %d", &n2) != 1) { printf("\nError: Expected only integer values\n"); exit(1); };
            multiplication_func(n1, n2);
            break;            
          
        case '/':
            printf ("\n\nEnter two numbers. \nFirst number: "); 
            if (scanf(" %d", &n1) != 1) { printf("Error: Expected only integer values\n"); exit(1); };
            printf ("Second number: ");  
            if (scanf (" %d", &n2) != 1) { printf("\nError: Expected only integer values\n"); exit(1); };
            division_func(n1, n2);
            break;

        case '!':
            printf ("\n\nEnter a number to calculate its factorial: "); 
            if (scanf(" %d", &n1) != 1) { printf("Error: Expected only integer values\n"); exit(1); };
            fuctorial_func(n1);
            break;

        case 'r':
            printf ("\n\nEnter a number to calculate its square root: "); 
            if (scanf(" %d", &n1) != 1) { printf("Error: Expected only integer values\n"); exit(1); };
            square_root_func(n1);
            break;
        default: 
            printf("Error: Please check the inputs\n");               
    }  
    return 0;  
}
