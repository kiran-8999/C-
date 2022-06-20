//pattern printing //Time complexity = N
//09/05
//---------------------------------------------
//i/p: 5
//o/p: 5 * 4 * 3 * 2 * 1 *
//complexity O(N)

#include<stdio.h>

void Display(int iValue)
{
  int i = 0;

  for(i=iValue; i>=1; i--)
  {
      printf("%d   *   ",i);
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

