#include<stdio.h>
int main()
{
int mark;
printf("enter the mark:\n");
scanf("%d",&mark);
if (mark<40)
{
printf("failed");
}
else
{
printf("congratulations, passed");
}
return 0;
}
