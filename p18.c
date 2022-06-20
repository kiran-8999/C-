// ************Problems On Digits************
//--------------------------------------------
// Seperate the digits
//input: 7856
//O/p:
//6   5   8   7

#include<stdio.h>

void DisplayDigits(int iValue)
{
    // if( iValue < 0)
    // {
    //     iValue = - iValue;
    // }
   int iDigit = 0;
  while(iValue != 0)
  {
   iDigit = iValue % 10;
   printf("\t %d", iDigit);
   iValue = iValue / 10;
  }
  
}
int main()
{
   int iNo = 0;

   printf("\n Enter number:\n");
   scanf("%d",&iNo);

   DisplayDigits(iNo);
    
   return 0;
}