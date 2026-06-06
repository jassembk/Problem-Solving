#include<stdio.h>
int main(void){
int n , i ; 
scanf("%d",&n);
int arr[n];
for(i=0 ; i<n ; i++ ){
printf("the element number %d :",i);
scanf("%d",&arr[i]);
}
printf("The Even elements are :");
for(i=0;i<n;i++){
    if(arr[i] % 2 == 0){
        printf(" %d ",arr[i]);}
    }     
    printf("\n The odd elements are :");
    for(i=0;i<n;i++){
    if(arr[i] % 2 != 0)
    printf(" %d ",arr[i]);

    }
    return 0;
}