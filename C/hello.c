#include<stdio.h>
int main(void){
int n , i , j , max , min ; 
scanf("%d",&n);
int arr[n];
for(i=0 ; i<n ; i++ ){
printf("the element number %d :",i);
scanf("%d",&arr[i]);
}

max = arr[0];

for(i=1;i<n;i++){
                   if ( arr[i]>max){
      max = arr[i];}
}
printf("\nmax = %d",max);
min = arr[0];
for(i=1;i<n;i++){
    if(arr[i]<min){
        min = arr[i];
    }
}
printf("\nmin = %d ",min);
    return 0;
}