//incomplete
//SELF//Reduce time complexity of program no:43.c
// Accept N no and accept another no 
//and return index of first occurance

#include<stdio.h>
#include<stdlib.h>

  int SearchFirstOccurance(int Arr[], int iLength,int iValue)
  {
     int i = 0, j=0;
     
          for(i=0, j =(iLength-1); i<iLength; i++, j--)
     {
         if(iValue == Arr[i])
         {
             printf(" %d",i);
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

   iRet = SearchFirstOccurance(ptr,iSize,iNo1);  //fun call
  
   free(ptr);    // memory free or deallocate
   return 0;
}
