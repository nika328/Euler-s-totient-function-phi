#include <stdio.h>
#include <stdlib.h>

  int GCD (int num1, int num2)
  {
    while(num2>0 && num1>0)
    {
      if(num1>num2)
      {
        num1=num1%num2;
      }
      else if(num2>num1)
      {
        num2=num2%num1;
      }
      if (num1==num2)
      {
        return num1;
      }
    }
    if (num1==0)
    {
      return num2;
    }
    else if( num2==0)
    {
      return num1;
    }
   return 0;
  }

int main()
{
    int num;
    printf("Enter a number n to get its phi(n) value: ");
    scanf("%d", &num);
    int count=1;

    for (int i=2; i<num; i++)
    {
        if(GCD(num,i)==1)
        {
            count ++;
        }
    }

    printf("The value phi(n) is: %d ", count);
    return 0;
}