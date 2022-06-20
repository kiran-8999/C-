// check weather given no is divisible by 2 or not
// using bool  //bool is ideal here instead of using int 
//bcz int has 4 byte and bool has 1 bit
#include<stdio.h>
#include<stdbool.h>

bool CheckEven(int iValue)
{
  if((iValue % 2) ==0)
  {
      return true;
  }
  else
  {
      return false;
  }
}
int main()
{
   int iNo;
   bool bRet = false;
   printf(" Enter a NUmber:");
   scanf("%d",&iNo);

    bRet = CheckEven(iNo);
    if(bRet == true)
    {
      printf("%d is Even \n",iNo);
    }
    else
    {
      printf("%d is Odd \n",iNo);
    }  
    return 0;
}