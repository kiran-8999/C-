//Addition of n no

#include<stdio.h>
#include<stdlib.h>

int Summation(int Arr[], int iSize)
{
    int iSum = 0, i =0;

    for(i = 0; i< iSize;  i++)
    {
        iSum = iSum + Arr[i];
    }

    return iSum;
}

int main()
{
    int iLength = 0;
    int *ptr = NULL;
    int i = 0 , iRet= 0;

   printf("Enter number of Elements : \n");
   scanf("%d",&iLength);

   ptr = (int* ) malloc (sizeof(int)*iLength);

   printf("Enter thr values of Array : \n");

   for(i=0; i<iLength;  i++)
   {
      scanf("%d",&ptr[i]);

   }
    
      iRet = Summation(ptr,iLength);

      printf("Addition is : %d ",iRet);
    return 0;
}