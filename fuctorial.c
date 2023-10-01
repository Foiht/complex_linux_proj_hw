#include <stdio.h>
#include <stdlib.h>
#include <math.h> 
#include "calc.h"


long factorial(int n)
{
    long result = 1, i;

    for (i = 2; i <= n; i++) {
        result *= i;
    }
 
    return result;
}

long fuctorial_func(int n1)  
{
    long result = factorial(n1);
    printf("\nFactorial of %d is: %ld\n", n1, result);
    return 0; 
}
