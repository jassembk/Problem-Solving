#include<stdio.h>
int main(void){

int n, target,i ; 
    printf("enter size of array :");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("enter target : ");
    scanf("%d",&target);
    for(i=0;i<n;i++){
        for(int j = i+1 ; j<n ; j++){
if(arr[i]+ arr[j]== target){
printf("outputs are : [%d,%d]",i , j);     

        }

        }
    }

    return 0; 
}