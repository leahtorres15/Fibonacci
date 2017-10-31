#include <stdio.h>

void FibonacciSeq (int InputNumber);

int main()
{
   int Integer;
   printf("Input Integer: ");
   scanf("%d", &Integer);
   FibonacciSeq(Integer);
   return 0;
}

void FibonacciSeq(int InputNumber)
{
   int Value[2];
   int NextNumber;
   Value[0] = 0;
   Value [1] = 1;
   if(InputNumber == 1)
   {
      printf("%d\n", (Value[0]));
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

