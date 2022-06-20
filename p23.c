// ************Problems On Digits************
//--------------------------------------------
// Return reverse no
//input: 127
//O/p:
//721

#include<stdio.h>

int ReverseNo(int iValue)
{
    // if( iValue < 0)
    // {
    //     iValue = - iValue;
    // }
   int iDigit = 0;
   int rev = 0;
  while(iValue != 0)
  {
     iDigit = iValue % 10;
     rev = rev * 10 + iDigit;
     iValue = iValue / 10;
  }
 
  return rev;
}
int main()
{
   int iNo = 0;
   int iRet = 0;

   printf("\n Enter number:\n");
   scanf("%d",&iNo);


   iRet = ReverseNo(iNo);

   printf("Reverse No is: %d",iRet);
    
   return 0;
}