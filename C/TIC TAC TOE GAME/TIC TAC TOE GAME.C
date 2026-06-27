#include<stdio.h>
#include<stdlib.h>
int main(void){
   int i , j  ; 
   char user1;
   char user2;
   char arr[3][3];
printf(" hey choose X or O : "); 
scanf(" %c",&user1);
if(user1 == 'X' ){
        user2 =  'O' ;
        printf("user1 press X");
                printf("\n user2 press O");
}

else if(user1 == 'O'){
        user2 = 'X';
                printf("user2 press X");
        printf("\n user1 press O");

}else {
        printf("\n invalid choice" );
}
for(i=0;i<3;i++){
        for (j=0 ;j<3; j++ ) {
               printf("\n [%d][%d] :",i , j);

scanf(" %c",&arr[i][j])  ;  
        } 
}
for(i=0;i<3;i++){
        for(j=0;j<3;j++){
                         printf(" %c ",arr[i][j]);

                if (j != 2 ){
         printf("|",arr[i][j]);
                }
        }
if (i != 2){
        printf(" \n -----------\n",arr[i][j]);
}
}

if(arr[0][0]==arr[0][1]&& arr[0][1]==arr[0][2])
printf("\n winner");
        if(arr[0][0]==arr[0][1]&& arr[0][1]==arr[0][2])

if(arr[1][0]==arr[1][1]&& arr[1][1]==arr[1][2])
printf("\n winner");

if(arr[2][0]==arr[2][1]&& arr[0][1]==arr[2][2])
printf("\n winner");

return 0; 
}