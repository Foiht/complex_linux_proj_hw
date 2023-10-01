#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "calc.h"


double square_root_func(int n1)  
{
    if (n1 < 0) { printf("\nCannot get square root of negative number.\n");  exit(1); }
    double result_ = sqrt(n1);
    printf("\nSquare root of %d is: %f\n", n1, result_);
    return 0; 
}
