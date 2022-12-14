#include<stdio.h>
#include<conio.h>
#include<math.h>
addition(int a,int b);
substract(int a,int b);
multiplies(int a,int b);
division(int a,int b);

void main()
{
int a,b,c,add,sub,multi,divi;
printf("Enter Your Input a =");
scanf("%d",&a);
printf("Enter Your Input b =");
scanf("%d",&b);
printf("Enter Your Action like (+ =1,- =2,* =3,/ =4) =");
scanf("%d",&c);


int ac = actiondata(c);
if(ac ==1){
add = addition(a,b);
printf("Enter Your Input addition %d\n",add);
}else if(ac==2){
sub = substract(a,b);
printf("Enter Your Input substract %d\n",sub);
}else if(ac==3){
multi = multiplies(a,b);
printf("Enter Your Input multiplies %d\n",multi);
}else if(ac==4){
divi = division(a,b);
printf("Enter Your Input division %d\n",divi);
}
getch();
}
actiondata(int a)
{
return a;
}
addition(int a,int b)
{
int x = a+b;
return x;
}
substract(int a,int b)
{
int x = a-b;
return x;
}
multiplies(int a,int b)
{
int x = a*b;
return x;
}
division(int a,int b)
{
int x = a/b;
return x;
}
