///Maximum from 2 Number -Using if else(goto up).c

#include<stdio.h>
#include<conio.h>

int main()
{
  int Num1=0, Num2=0;

  Up:
     printf("\n Enter 2 Integer Numbers = ");
     scanf("%d%d",& Num1,& Num2);

     if(Num1 == Num2)
  {
      printf("\n Both Number are Equal,\n please Enter Different Numbers To Compare,\n");
      getch();
      system ("cls");
      goto Up;

    }

    if(Num1 > Num2)
    {
      printf("\n Number%d is Maximum.",Num1);

    }
    else
    {
      printf("\n Number%d is Maximum.",Num2);
    }

    printf ("\n Thanks !!!");
    getch();
    return 0;
}


