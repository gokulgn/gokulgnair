#include<stdio.h>
#define MAX 100

void printMat(float a[MAX][MAX],int n,int k)
{
for(int i=0;i<n;i++)
{
for(int j=0;j<k;j++)
{
printf("%f  ",a[i][j]);
}
printf("\n");
}
printf("\n\n");
}

int main()
{
float u[MAX][MAX],y[MAX],x[MAX],b[MAX];
float l[MAX][MAX],fact,eq[MAX][MAX];
int size;
printf("Enter the number of variables in question : ");
scanf("%d",&size);
for(int i=0;i<size;i++)
{
for(int j=0;j<size;j++)
{
printf("Enter coefficient of x%d of %d equation : ",j+1,i+1);
scanf("%f",&eq[i][j]);
}
}
for(int i=0;i<size;i++)
{
printf("Enter the soln b%d : ",i+1);
scanf("%f",&b[i]);
}
printf("\n*********************************************************\n\n");
for(int i=0;i<size;i++)
{
for(int j=0;j<size;j++)
{
u[i][j]=eq[i][j];
}
}
printf("Value of eq matrix : \n");
printMat(eq,size,size+1);
printf("Value of u : \n");
for(int i=1;i<size;i++)
{
int z=0;
for(int j=0;j<i;j++)
{
fact=u[i][j]/u[z][j];
l[i][j]=fact;
for(int k=0;k<size;k++)
{
u[i][k]=u[i][k]-(fact*u[z][k]);
}
z++;
}
}
printMat(u,size,size);
for(int i=0;i<size;i++)
{
for(int j=0;j<=size;j++)
{
if(i==j)
l[i][j]=1;
else if(j>i)
l[i][j]=0;
}
}
printf("Value of l Matrix :\n");
printMat(l,size,size);
y[0]=b[0];
for(int i=1;i<size;i++)
{
float sum=0;
for(int j=0;j<i;j++)
sum=sum+l[i][j]*y[j];
y[i]=b[i]-sum;
}
x[size-1]=y[size-1]/u[size-1][size-1];
for(int i=size-2;i>=0;i--)
{
float sum=0;
for(int j=size-1;j>i;j--)
sum=sum + (u[i][j]*x[j]);
x[i]=(y[i]-sum)/u[i][i];
}
for(int i=0;i<size;i++)
printf("The value of x%d : %f\n",i+1,x[i]);
return 0;
}
