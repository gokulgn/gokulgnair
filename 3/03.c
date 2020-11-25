#include<stdio.h>
#include<stdlib.h>

int main()
{
int a[]={4,23,15,44,3,18,11,100,82,38,56,25,10,65,34,5,76,23,90,7};
printf("The elements in the array are as follows : \n");
for(int i=0;i<20;i++)
{
printf("%d\n",a[i]);
}
for(int i=0;i<19;i++)
for(int j=i;j<20;j++)
{
if(a[i]>a[j])
{
a[i]=a[i]+a[j];
a[j]=a[i]-a[j];
a[i]=a[i]-a[j];
}
}
printf("The sorted array is as follows : \n");
for(int i=0;i<20;i++)
printf("%d\n",a[i]);
return 0;
}
