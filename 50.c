//pattern printing
//09/05
//---------------------------------------------
//i/p: 5
//o/p: 1  2  3  4   5

#include<stdio.h>

void Display(int iValue)
{
  int i = 0;

  for(i=1; i<=iValue; i++)
  {
      printf("%d\t",i);
  }
}

  int main()
  {
      int iNo = 0;

      printf("Please Enter the value: \n");
      scanf("%d",&iNo);

      Display(iNo);

      return 0;
  } 

