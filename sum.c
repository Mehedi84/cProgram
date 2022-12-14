#include<stdio.h>
#include<conio.h>
void main()
{
    int a=3;
    int b=(++a)+(a++)+(a++)+(++a)+(a);
    int sum=0;
    for(a=1;a<=5;a++){
        if(a%2 !=0)
          printf("%d\n",a);
    }
   /* do{
       printf("%d\n",a);
       a++;
    }
    while(a<=10);*/

    printf("%d\n %d",a,b);

    getch();
}
