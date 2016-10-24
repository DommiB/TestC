

#include "TestFunc.h"


static uint32_t Helper ( uint32_t Val) 
{
    return (Val + 10); 
}




int TestFunc ( uint32_t data, char *pString)
{

    sprintf(pString,"%d,%d",data,Helper(data)); 

    return 0; 

}
