//Accept base and power:
//o/p:  2^3=8
//use of TYPEDEF
//-------------------------------------------------------
//===========================================================================

#include<stdio.h>

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

int main()
{
   int ino1=0;
   int ino2=0;
   ULONG LRet = 0;

   printf(" Enter Base: \n");
   scanf("%d",&ino1);

   printf(" Enter Power: \n");
   scanf("%d",&ino2);
   
   LRet = Power(ino1,ino2);

   printf( " RESULT :  %ld", LRet);

    return 0;
}