#include <stdio.h> 
#include <stdlib.h>
#include "text_formatter.h"


int main()  
{  
    char option;

    printf("Choose an option how to convert string:\t\tTo uppercase - 1\tTo lowercase - 2\n(enter 1 or 2): ");  
    if (scanf("%c", &option) != 1) { printf("Error to read option.\n"); exit(1); };
    if (option == '1' )  { printf("Selected option: Uppercase\n\n"); }
    else if (option == '2')  { printf("Selected option: Lowercase\n\n"); }
    else { printf("Error: Selected the unknown option.\n"); exit(1); }
   

    switch(option)  
    {  
        case '1':  
            upper_func();
            break;  
          
        case '2':
            lower_func();
            break;  
              
        default: 
            printf("Error: Please check the inputs\n");               
    }  
    return 0;  
}
