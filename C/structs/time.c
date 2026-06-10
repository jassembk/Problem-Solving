#include<stdio.h>
struct time 
{
int hours ; 
int min ; 
int sec ; 
};
int main(void){
struct time t1 ;
struct time t2 ;
struct time t3 ;

printf("enter hour :");
scanf("%d",&t1.hours);
printf("\n enter mins : ");
scanf("%d",&t1.min);
printf("\n enter sec:");
scanf("%d",&t1.sec);
printf("\n enter hour :");
scanf("%d",&t2.hours);
printf("\n enter mins : ");
scanf("%d",&t2.min);
printf("\n enter sec:");
scanf("%d",&t2.sec);
printf("\n time 1 is :");
printf("\n %d:%d:%d",t1.hours,t1.min,t1.sec);
printf("\n time 2 is :");
printf("\n %d:%d:%d",t2.hours,t2.min,t2.sec);
t3.hours = t1.hours + t2.hours ; 
t3.min = t1.min + t2.min ; 
t3.sec = t1.sec + t2.sec ; 

if(t3.sec >= 60)
{
    t3.min =t3.min +(t3.sec/ 60);
    t3.sec =t3.sec % 60;
}

if(t3.min >= 60)
{
    t3.hours = t3.hours + (t3.min / 60) ;
    t3.min =t3.min % 60;
}

if(t3.hours >= 24)
{
    t3.hours = t3.hours % 24;
}
printf("\n the sum of time is : ");

printf("\n %d:%d:%d",t3.hours,t3.min,t3.sec);
return 0 ; 
}