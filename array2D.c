#include<stdio.h>
#include<conio.h>
void main(){
arr2D();
getch();
}

void arr2D(){
int a,b;
int sum=0;
int arr[4][4]={
            {2,3,4,7},
            {9,2,3,4},
            {2,6,4,9},
            {1,8,5,9}
            };
/*show All */
for(a=0;a<=3;a++){
   for(b=0;b<=3;b++){
      printf("%d ",arr[a][b]);
   }
   printf("\n");
}

/*show Sum */
for(a=0;a<=3;a++){
   for(b=0;b<=3;b++){
      sum=sum+arr[a][b];
   }
}
printf("Sum Of 2D Array = %d\n",sum);

/*show Minumam Value */
int min = arr[0][0];
for(a=0;a<=3;a++){
   for(b=0;b<=3;b++){
      if(arr[a][b] < min){
        min = arr[a][b];
      }
   }
}
printf("Minimum Value = %d\n",min);

/*show Maximum Value */
int max = arr[0][0];
for(a=0;a<=3;a++){
   for(b=0;b<=3;b++){
      if(arr[a][b] > max){
        max = arr[a][b];
      }
   }
}
printf("Maximum Value = %d\n",max);


int pir[3][3];
for(a=0;a<=3;a++){
   for(b=0;b<=3;b++){
      printf("%d ",arr[a][b]);
   }
   printf("\n");
}
}
