#include <stdio.h>
#include <string.h> 
#include <stdlib.h>
#include <ctype.h>
#include "text_formatter.h"
  

int lower_func()  
{
    int exitcode = 0; 
    char string[200];

    printf("Enter a string: ");
    while (fgets(string, sizeof(string), stdin) != NULL) {
        char *str = string;
        while(*str) { *str = tolower(*str); str++; };
        if (exitcode == 1 )  { printf("\nLower String is: %s\n", string); exit(0); }
        exitcode = 1; 
    }
    return 0;
}
