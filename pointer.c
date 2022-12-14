#include<stdio.h>
#include<conio.h>
void poin();
void main(){
poin();
getch();
}
void poin()
{
 int x=10;
 int *y=&x;
 printf("x=%d\n",x);
 printf("&x=%d\n",&x);
  printf("y=%d\n",y);
   printf("&y=%d\n",&y);
     printf("*y=%d\n",*y);

}
