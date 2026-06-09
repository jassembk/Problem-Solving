#include<stdio.h>
#include <string.h>
struct student  {
  int age ; 
  char name [50] ; 
  float tmarks ; 
};
int main() {
struct student s1 ;
struct student s2 ; 
printf("student 1 enter your age :");
scanf("%d",&s1.age);
printf("student 1 enter you name :");
scanf("%s",&s1.name);
printf("student 1 enter your mark");
scanf("%f",&s1.tmarks);
printf("enter your age :");
scanf("%d",&s2.age);
printf("enter you name :");
scanf("%s",&s2.name);
printf("student 2 enter your mark");
scanf("%f",&s2.tmarks);
printf("student 1 age is = %d",s1.age);
printf("\n student 1 name is : %s",s1.name);
printf("\n student 2 age is = %d",s2.age);
printf("\n student 2 name is : %s",s2.name);
 float tmarks = (s1.tmarks + s2.tmarks) / 2;
    printf("\nAverage Total Marks: %.2f\n", tmarks);

  return 0 ; 
}