#include <stdio.h>
#include <math.h> 
#include <stdlib.h>
#include "header.h"


int addition_func(int n1, int n2)  
{  
    int result_ = n1 + n2;
    printf("\nAddition of %d and %d is: %d\n", n1, n2, result_); 
    return 0;  
}  
  

int subtraction_func(int n1, int n2)  
{  
    int result_ = n1 - n2;
    printf("\nSubtraction of %d and %d is: %d\n", n1, n2, result_);
    return 0; 
}  
  

int multiplication_func(int n1, int n2)  
{  
    int result_ = n1 * n2;
    printf("\nMultiplication of %d and %d is: %d\n", n1, n2, result_);  
    return 0; 
}  
  

int division_func(int n1, int n2)  
{  
    if (n2 == 0) { printf("\nZero division error.\n"); }
    int result_ = n1 / n2;
    printf("\nDivision of %d and %d is: %d\n", n1, n2, result_);
    return 0; 
}
