// Accept N no and accept another no 
//and return index of Last occurance

#include<stdio.h>
#include<stdlib.h>

  int SearchLastOccurance(int Arr[], int iLength,int iValue)
  {
     int i = 0;
     
          for(i=iLength-1; i>=0; i--)  ///most imp
     {
         if(iValue == Arr[i])
         {
             break;
             
         }
     }   
    return i;
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

   printf("Enter a no to search:\n") ;
   scanf ("%d", &iNo1);

   iRet = SearchLastOccurance(ptr,iSize,iNo1);  //fun call
  
   if(iRet == -1)
   {
   printf("No number found",iRet);
   }
    else
   {
   printf("last occurance index no is: %d",iRet);
   }
   free(ptr);    // memory free or deallocate
   return 0;
}
