#include<stdio.h>

int main()
{
unsigned int a[]={4,23,15,44,3,18,11,100,82,38,56,25};
unsigned int b,c;
unsigned short int i;
printf("Enter the number you want to search in the array : ");
scanf("%d",&b);
c=sizeof(a)/sizeof(int);
for(i=0;i<c;i++)
{
if(a[i]==b)
{
printf("The number is present in the array!!!!!\n");
break;
}
}
if(i==c)
printf("The number is not present in the array!!!!\n");
}
