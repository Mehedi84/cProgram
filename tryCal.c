#include<stdio.h>
#include<conio.h>

void main()
{
  int a,b,c,add,sub,mult,divi;
  printf("Enter Your First Value a = ");
  scanf("%d",&a);
  printf("Enter Your Secend Value b = ");
  scanf("%d",&b);
  printf("Enter Your Symble like('+=1,-=2,*=3,\=4') c  = ");
  scanf("%d",&c);

  int action = actiondata(c);
  if(action==1)
  {
    add = addition(a,b);
    printf("Enter Your Input addition %d\n",add);
  }else if(action==2){
    sub = substract(a,b);
    printf("Enter Your Input substract %d\n",sub);
  }else if(action==3){
    mult = multiplies(a,b);
    printf("Enter Your Input multiplies %d\n",mult);
  }else if(action==4){
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
  int total = a+b;
  return total;
}
substract(int a,int b)
{
  int total = a-b;
  return total;
}
multiplies(int a,int b)
{
  int total = a*b;
  return total;
}
division(int a,int b)
{
  int total = a / b;
  return total;
}
