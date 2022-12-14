#include<stdio.h>
#include<conio.h>
void main()
{
    int arr[6]={8,9,6,5,9,8};
    int a;
    int m;
    int max;
    int sum=0;
    for(a=0;a<=5;a++){
        printf("First Array Print= %d\n",arr[a]);
    }

        for(a=0;a<=5;a++){
          if (arr[a]<m){
            m=arr[a];
          }
         if (arr[a]>max){
            max=arr[a];
          }
        }
        printf("First Array Smsll Value= %d\n",m);
        printf("First Array Max Value= %d\n",max);

        for(a=0;a<=5;a++){
         sum+=arr[a];
        }
        printf("First Array SUM= %d\n",sum);
    getch();
}
