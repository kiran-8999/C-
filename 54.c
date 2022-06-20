//pattern printing //
//09/05
//---------------------------------------------
//i/p: 4
//o/p:  4  3  2  1  1  2  3  4

#include<stdio.h>

void Display(int iValue)
{
  int i = 0;


  for(i=iValue; i>=1; i--)
  {
      printf("%d\t",i);
  }
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

