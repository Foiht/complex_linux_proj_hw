#include <stdio.h>
#include <stdlib.h>
#include <math.h> 
#include "func.h"
#include "helpers.h"


int addition_func()  
{  
    printf ("\n\nEnter two numbers.\n"); 
    int n1, n2 = get_numbers_from_user(2);
    int result_ = n1 + n2;
    printf("\nAddition of %d and %d is: %d\n", n1, n2, result_); 
    return 0;  
}  
  

int subtraction_func()  
{  
        printf ("\n\nEnter two numbers.\n"); 
    int n1, n2 = get_numbers_from_user(2);
    int result_ = n1 - n2;
    printf("\nSubtraction of %d and %d is: %d\n", n1, n2, result_);
    return 0; 
}  
  

int multiplication_func()  
{  
    printf ("\n\nEnter two numbers.\n"); 
    int n1, n2 = get_numbers_from_user(2);
    int result_ = n1 * n2;
    printf("\nMultiplication of %d and %d is: %d\n", n1, n2, result_);  
    return 0; 
}  
  

int division_func()  
{
    printf ("\n\nEnter two numbers.\n"); 
    int n1, n2 = get_numbers_from_user(2);  
    if (n2 == 0) { printf("\nZero division error.\n");  exit(1); }
    int result_ = n1 / n2;
    printf("\nDivision of %d and %d is: %d\n", n1, n2, result_);
    return 0; 
}


long fuctorial_func()  
{
    printf ("\n\nEnter a number to calculate its factorial\n"); 
    int n1 = get_numbers_from_user(1);  
    long result_ = factorial(n1);
    printf("\nFactorial of %d is: %d\n", n1, result_);
    return 0; 
}

double square_root_func()  
{
    printf ("\n\nEnter a number to calculate its square root\n"); 
    int n1 = get_numbers_from_user(1);
    if (n1 < 0) { printf("\nCannot get square root of negative number.\n");  exit(1); }
    double result_ = sqrt(n1);
    printf("\Square root of %d is: %d\n", n1, result_);
    return 0; 
}
