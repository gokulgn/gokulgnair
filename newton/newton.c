
#include<stdio.h>
int main()
{
int x[10], func[10], op[10];
int b1,n,i,j=1,flag1=1,flag2=0;
float z;
printf("\nEnter the total number of samples :\t");
scanf("%d", &n);
printf("\nEnter the values of x:\n");
for (i=1;i<=n;i++)
scanf("%d", &x[i]);
printf("\nEnter the values of y :\n");
for (i=1;i<=n;i++)
scanf("%d", &func[i]);
b1=func[1];
printf("\nEnter the value of  p  for the function f(p):\t");
scanf("%f", &z);
do
{
for (i=1;i<=n-1;i++)
{
op[i] = ((func[i+1]-func[i])/(x[i+j]-x[i]));
func[i]=op[i];
}
flag1=1;
for(i=1;i<=j;i++)
{
flag1*=(z-x[i]);
}
flag2+=(func[1]*flag1);
n--;
j++;
}
while(n!=1);
b1+=flag2;
printf("\nFinal output  f(%f) = %d", z , b1);
}
