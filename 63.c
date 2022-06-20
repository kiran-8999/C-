//pattern printing  // non linear
//09/05
//---------------------------------------------
//i/p: row:4    col:4
//o/p: $  *  *  * 
//     *  $  *  *
//     *  *  $  *  
//     *  *  *  $    


#include<stdio.h>

void Display(int iRow, int iCol)
{
  int i = 0, j=0;

  for(i=1; i<=iRow; i++) //outer
  {
     for (j=1; j<=iCol; j++) //inner
     {
         if( i== j)
         {
             printf(" $ ");
         }
         else
         {
          printf(" * ");
         }  
     }
     printf("\n");
  }
}

  int main()
  {
      int iNo1 = 0 , iNo2 = 0;

      printf("Please Enter number of Row: \n");
      scanf("%d",&iNo1);

      printf("Please Enter number of columns: \n");
      scanf("%d",&iNo2);

      Display(iNo1, iNo2);

      return 0;
  } 

