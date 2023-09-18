#include <stdio.h>
#include <stdlib.h>
#include <math.h> 
#include <math.h>
#include "helpers.h"


int * get_numbers_from_user(int nums_count)
{
    static int* numbers;
    numbers = (int*)malloc(nums_count * sizeof(int));

    int i;
    for ( i = 0; i < nums_count; ++i) {
        int num;
        if (scanf(" %d", &num) != 1) { printf("Error: Expected only integer values\n"); exit(1); };
        numbers[i] = num;
    }
}


long factorial(int n)
{
  if (n == 0)
    return 1;
  else
    return (n * factorial(n-1));
}
