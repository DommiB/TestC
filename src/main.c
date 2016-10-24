#include <stdio.h>
#include <stdint.h>
#include "TestFunc.h"



int main ( void ) 
{
    uint32_t a = 32; 
    char Buffer[20] = {0 };

    printf ("Hello World \r\n"); 
    printf("Buffer before: %s\r\n",Buffer); 
    TestFunc(a,Buffer); 
    printf("Buffer after: %s\r\n",Buffer); 

    return 0; 
}
