///Check Given Number is Given or Odd(if else)

#include<stdio.h>
#include<conio.h>

int main()
{
  int i=0;

        printf("\n Enter Number =");
        scanf("%d",&i);

  if(i==0)
  {
     printf("Given Number is Neutral");
  }

  else if(i%2==0)
  {
     printf("\n Given Number is Even");
  }

  else
  {
     printf("\n Given Number is Odd");
  }

     printf("\n Thank you!!");

     getch();
     return 0;
}
