#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef unsigned short int bool_t;

void sort(unsigned int* array,unsigned short int s)
{
for(unsigned short int i=0;i<(s-1);i++)
{
for(unsigned short int j=i+1;j<s;j++)
{
if(array[i]>array[j])
{
array[i]=array[i]+array[j];
array[j]=array[i]-array[j];
array[i]=array[i]-array[j];
}
}
}
/*printf("The sorted array is as follows : \n");
for(unsigned short int i=0;i<s;i++)
printf("%d\n",arr[i]);
printf("\n");*/
return;
}

bool_t bsFunc(unsigned int* array,unsigned short int s,unsigned int searchEle)
{
unsigned short int min=0;
unsigned short int max=s-1;
unsigned short int mid;
while((max-min)!=1)
{
mid=(max-min)/2;
if(array[min+mid]>searchEle)
{
max=min+mid;
if(array[max]==searchEle || array[min]==searchEle)
return TRUE;
}
else if(array[min+mid]<searchEle)
{
min=min+mid;
if(array[max]==searchEle || array[min]==searchEle)
return TRUE;
}
else
return TRUE;
}
return FALSE;
}

int main()
{
unsigned int array[]={4,23,15,44,3,18,11,100,82};
unsigned short int s=sizeof(array)/sizeof(int);
unsigned int search;
sort(array,s);
printf("Enter the number you want to search : ");
scanf("%d",&search);
//printf("Will look into it :)\n");
if(bsFunc(array,s,search))
printf("The element is present in the array \n");
else
printf("The element is not present in the array \n");
return 0;
}
