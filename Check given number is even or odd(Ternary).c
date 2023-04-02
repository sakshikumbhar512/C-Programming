///program to check Whether Given Number is Even or Odd(Using Ternary Operator)


#include <stdio.h>
#include<conio.h>

  int main()
 {
    int No=0;
    printf("\nEnter The Number = ");
    scanf("%d",&No);

    (No==0)?printf("\n Neutral Number,\n Please Enter Other Number "):(No%2==0)?printf("Even"):printf("Odd");
    printf("\n Thank You !!!");

    getch();
  return 0;
}
