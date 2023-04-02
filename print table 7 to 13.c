//Program  to print 7 to 13 table
#include<stdio.h>
#include<conio.h>
 int main()
 {
    int X=0,Y=0;
    printf("\n Tables in Range 7to 13 ");
    printf("\n________________________________\n\n");

    for( X=1;X<=10;X++)
     {
         for(Y=7;Y<=13;Y++)
         {
            printf("%-4d",X*Y);
         }
         printf("\n");
    }
    printf("\n___________________________________\n");
    getch();
    return 0;
 }
