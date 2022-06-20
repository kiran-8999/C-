// Accept N no and accept another no 
//and return the occurance of that no
//**** count ferquency*******

#include<stdio.h>
#include<stdlib.h>

  int CountOccurance(int Arr[], int iLength,int iValue)
  {
     int i = 0;
     int count = 0;
     
          for(i=0; i<iLength; i++)
     {
         if(iValue == Arr[i])
         {
             count ++;
         }
     }   
     return count;
  }

int main()
{
   int iSize = 0;
   int i = 0;
   int iRet = 0;
   int iNo1 = 0;
   int  *ptr =NULL;

   printf("Enter number of elements: \n");
   scanf("%d",&iSize);

   ptr =(int *) malloc(iSize *sizeof(int));

   printf("Enter Values of Array: \n");

   for(i=0; i<iSize; i++)
   {
       scanf("%d",&ptr[i]);
   }

   printf("Find occurance of no:\n") ;
   scanf ("%d", &iNo1);

   iRet = CountOccurance(ptr,iSize,iNo1);  //fun call

   printf("Occurance is : %d \n",iRet);

   free(ptr);    // memory free or deallocate
   return 0;
}
