///Maximum from 2 Numbers -Using if else(goto DWNS).c

#include<stdio.h>
#include<conio.h>

int main()
{
   int Num1=0,Num2=0;

   printf("\n Enter 2 Integers Numbers =");
   scanf("%d%d",&Num1,&Num2);

   if(Num1==Num2)

   {
      printf("\n Both Numbers Are Equal .");
      goto DWN;

   }
    if (Num1>Num2)
    {
     printf("\n Number %d is Maximum.",Num1);
    }
    else
    {
      printf("\n Number %d is Maximum.",Num2);
    }

DWN:
     printf("\n Thanks");
     getch();
     return 0;



}


