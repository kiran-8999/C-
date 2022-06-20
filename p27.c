//using 3 files
//Accept base and power:
//o/p:  2^3=8
//use of TYPEDEF
//-------------------------------------------------------
//===========================================================================


 #include "p27_header.h"

int main()
{
   int ino1 = 0;
   int ino2 = 0;
   ULONG LRet = 0;

   printf(" Enter Base: \n");
   scanf("%d",&ino1);

   printf(" Enter Power: \n");
   scanf("%d",&ino2);
   
   LRet = Power(ino1,ino2);

   printf( " RESULT :  %ld", LRet);

    return 0;
}