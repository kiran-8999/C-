// check weather given no is divisible by 2 or not
// using int
#include<stdio.h>
#include<stdbool.h>

int CheckEven(int iValue)
{
  if((iValue % 2) ==0)
  {
      return 1;
  }
  else
  {
      return 0;
  }
}
int main()
{
   int iNo;
   int iRet = 0;
   printf(" Enter a NUmber:");
   scanf("%d",&iNo);

    iRet = CheckEven(iNo);
    if(iRet == true)
    {
      printf("%d is Even \n",iNo);
    }
    else
    {
      printf("%d is Odd \n",iNo);
    }  
    return 0;
}