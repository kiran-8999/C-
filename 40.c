//Accept N no and return addition of that:

#include<stdio.h>
#include<stdlib.h>

  int Summation(int Arr[], int iLength)
  {
     int i = 0;
     int iSum = 0;
     
          for(i=0; i<iLength; i++)
     {
         iSum = iSum + Arr[i];     
     }   
     return iSum;
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

   iRet = Summation(ptr,iSize);  //fun call

   printf("Summation is : %d \n",iRet);

   free(ptr);    // memory free or deallocate
   return 0;
}
