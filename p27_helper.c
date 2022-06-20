#include "p27_header.h"

typedef unsigned long int ULONG;
ULONG Power(int iValue1, int iValue2)
{
     ULONG LMult = 1;
    register int i = 0;    // reg storage class loop counter frequent use 

    for (i =1 ; i<=iValue2; i++)
    {
        LMult = LMult * iValue1;
    }   
    return LMult;
}

