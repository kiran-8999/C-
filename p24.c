// ************Problems On Digits************
//--------------------------------------------
// check pallindrom

#include<stdio.h>
#include<stdbool.h>

int checkPallindrom(int iValue)
{
     if( iValue < 0)
     {
         iValue = - iValue;
     }

    int temp = 0;
    temp = iValue;

   int iDigit = 0;
   int rev = 0;
  while(iValue != 0)
  {
     iDigit = iValue % 10;
     rev = rev * 10 + iDigit;
     iValue = iValue / 10;
  }
   if(rev == temp)
  {
      return true;
  }
 else
 {
      return false;
 }
  return rev;
}
int main()
{
   int iNo = 0;
   
    bool bRet;

   printf("\n Enter number:\n");
   scanf("%d",&iNo);

   bRet = checkPallindrom(iNo);
   if(bRet == true)
  {
      printf("\n No is Pallindrom");
  }
 else
 {
      printf("\n No is NOT Pallindrom");
 }   
   return 0;
}