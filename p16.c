//using else if else ladder
//Write a program student score
// 0-35 = fail
// 35-50 =pass class
//50-60= 2nd class
//60-70=1st class
//abv 70 1st class with distinction
#include<stdio.h>
void DisplayClass(float fValue)
{
  if((fValue >0.0) && (fValue<35.0))
  {
    printf("\n Fail");
  }

 else if((fValue >=35.0) && (fValue<50.0))
 {
    printf("\n Pass class"); 
 }

 else if((fValue >=50.0) && (fValue<60.0))
 {
    printf("\n Second class"); 
 }

 else if((fValue >=60.0) && (fValue<70.0))
 {
    printf("\n First class"); 
 }

 else if((fValue >=70.0) && (fValue<100.0))
 {
    printf("\n First class with distiction"); 
 }
 else
 {
     printf("\n invalid percentage");
 }
 
}
int main()
{
    float fNo =0.0;
    printf(" Enter Percentage:");
    scanf("%f",&fNo);

    DisplayClass(fNo);
    return 0;
}