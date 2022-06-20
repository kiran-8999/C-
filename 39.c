//Accept n no from user and display even no

#include<stdio.h>
#include<stdlib.h>

  int CountEven(int Arr[], int iLength)
  {
     int i = 0;
     int iEvenCnt = 0;
     
     for(i=0; i<iLength; i++)
     {
         if(Arr[i] % 2 == 0)
         {
           iEvenCnt++;
         } 
     }   
     return iEvenCnt;
  }

int main()
{
   int iSize = 0;
   int i = 0;
   int iRet = 0;
   int  *ptr =NULL;

   printf("Enter number of elements: \n");
   scanf("%d",&iSize);

   ptr =(int *) malloc(iSize *sizeof(int));

   printf("Enter Values of Array: \n");

   for(i=0; i<iSize; i++)
   {
       scanf("%d",&ptr[i]);
   }

   iRet = CountEven(ptr,iSize);  //fun call

   printf("no of even elements are : %d \n",iRet);

   free(ptr);    // memory free or deallocate
   return 0;
}
