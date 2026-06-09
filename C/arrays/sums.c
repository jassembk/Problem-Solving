#include<stdio.h>
struct begin 
{
    int mynum ; 
    char myletter ; 
};
int main(void){
struct begin s1;
s1.mynum = 13;
s1.myletter = "B" ;
printf("my numeber =%d",s1.mynum);
printf("my letter : %c",s1.myletter);

    return 0;
}