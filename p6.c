///Program to display 1 to 5 on screen//
///output:  1   2   3   4   5//

#include<stdio.h>
void Display()
{
    int i=0;
    for(int i=1; i<=5; i++)
    {
        printf("     %d ", i );
    }
}

int main()
{
    Display();
    return 0;
}