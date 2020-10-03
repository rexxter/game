#include<stdio.h>
using namespace std;
int main()
{
int i;
  point1:
printf("enter 1 for member entry for game and 0 for otherwise");
scanf("%d",&i);
if(i=1)
{
char name[100];
int age;
char sex;  ?/ m or f
char power;  //god(g) or demon(d)
printf("enter name");
scanf("%s",name);
printf("enter age");
scanf("%d",&age);
printf("enter sex");
scanf("%c",&sex);
printf("enter power");
scanf("%c".&power);
  goto point1;
}
  if(i=0)
  {
    printf("name=&s",name[]);
    printf("age=&d",age);
    printf("sex%c",sex);
    printf("power%c",power);
  }
  return 0;
}
  
