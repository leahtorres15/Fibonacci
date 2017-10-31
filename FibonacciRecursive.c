#include <stdio.h>

int Fibonacci(int InputNumber);
int main()
{
   int iVal;
   int Input;
   printf("Enter an Intger: ");
   scanf("%d", &Input);
   iVal = Fibonacci(Input-1);
   printf("%d\n", iVal);
   return 0;
}


int Fibonacci(int InputNumber)
{
   if (InputNumber == 0 || InputNumber == 1)
   {
      return InputNumber;
   }
   else
   {
      int n;
      n = Fibonacci(InputNumber-1) + Fibonacci(InputNumber-2);
      return n;
   }















   int Value[2];
   int NextNumber;
   Value[0] = 0;
   Value [1] = 1;
   if(InputNumber == 1)
   {
      printf("\n");
   }
   else if(InputNumber == 2)
   {
      printf("%d, %d\n", (Value[0]), (Value[1]));
   }
   else
   {
      int i;
      printf("%d, %d", (Value[0]), (Value[1]));
      for(i=2; i<InputNumber-1; i++)
      {
         NextNumber = Value[0] + Value[1];
         Value[0] = Value[1];
         Value[1] = NextNumber;
         printf(", %d", (Value[1]));
      }
      Value[1] = Value[0] + Value[1];
      printf(", %d\n", (Value[1]));
   }
}

