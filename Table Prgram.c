///Display Table of 7to 12(Using While loop).

#include<stdio.h>
#include<conio.h>

int main()
{

    printf("\n Enter a Table 7 to 12");

     int i = 1;

    while(i<=10)
    {
        printf("\n %d \t" ,i * 7);
        printf("%d \t",i * 8);
        printf("%d \t",i * 9);
        printf("%d \t",i * 10);
        printf("%d \t",i * 11);
        printf("%d \t",i * 12);
        i++;
    }
    getch();
    return 0;
}
