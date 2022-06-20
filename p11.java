///Program to display Summation//
//input: 4
///output: 1+2+3+4
import java.lang.*;

class Summation
{
   public int i=0;
   public int Sum=0;

   public Summation(int k)
    {
     for( i=1; i<=k; i++)
    {
        Sum= Sum+i;
    }    
  }


public static void main(String arg[])
{
    Summation obj= new Summation();
    obj.Summation(4);
    System.out.println("sum", + obj.Sum);
    

}}