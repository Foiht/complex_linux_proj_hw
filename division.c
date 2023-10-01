#include <stdio.h>
#include <stdlib.h>
#include "calc.h"


int division_func(int n1, int n2)  
{
    if (n2 == 0) { printf("\nZero division error.\n");  exit(1); }
    int result_ = n1 / n2;
    printf("\nDivision of %d and %d is: %d\n", n1, n2, result_);
    return 0; 
}
