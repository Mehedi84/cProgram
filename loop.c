
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    int a = 1;

    /*for(a=1;a<=10;a++){
        printf("The Number Is = %d\n",a);
    }*/

    /*while(a<=10){
        printf("The Number Is = %d\n",a);
        a++;
    }*/

    do{
        printf("The Number Is = %d\n",a);
        a++;
    }
    while(a<=10);

    getch();
}
