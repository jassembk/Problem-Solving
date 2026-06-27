#include<stdio.h>
struct circle
{
int raduis ;
float area ;
float per ; 
};
int main(void){
struct circle s1; 
struct circle s2;
printf("enter r of c1 : ");
scanf("%d",&s1.raduis);
s1.area = (s1.raduis*s1.raduis)*3.14 ; 
printf("area = %.2f",s1.area);

    return 0 ;
}