#include<stdio.h>
#include<conio.h>

int a = 4;
int b= 5;
int c=6;
void main(){
    if(a==4){
       printf("Statement 1");
       if(a<b){
        printf("Statement 2");
        printf("Statement 3");
       }else{
        printf("Statement 4");
       }
    }
    else{
        if(a==8){
        printf("Statement 5");
        printf("Statement 6");
        }else{
        if(a==6){
        printf("Statement 7");
        printf("Statement 8");
        }else{
        if(a==41){
        printf("Statement 9");
        printf("Statement 10");
            }
          }
        }
    }



   getch();
}
