
#include<stdio.h>
#include<conio.h>
void main()
{

    int a=5;
    int b=6;
    int c=7;
    if(c==2){
        if(a==5){
           printf("satate-1");
           if(a==6){
             printf("satate-2");
              printf("satate-3");
           }else{
                printf("satate-4");
                if(a==5){
                     printf("satate-5");
                }
           }
        }else{
         printf("satate-6");
         if(a==3){
         }else{
          printf("satate-9");
         }
        }
    }else{
    if(b==9){
         printf("satate-7");
          printf("satate-8");
    }else{
    if(c==71){
         printf("satate-10");
    }
    }
    }


    getch();
}
