#include<iostream>

using namespace std;

void printMat(float abc[20][20],int n)
{
cout << "The matrix is : "<< endl;
for(int i=0;i<n;i++)
{
for(int j=0;j<n+1;j++)
{
cout << abc[i][j]<<"\t";
}
cout << endl << endl;
}
}

int main()
{
int n;
float output[20];
float matrix[20][20];
float fact;
cout << "Enter the number of equations: ";
cin >> n;
for(int i=0;i<n;i++)
{
for(int j=0;j<n+1;j++)
{
cout<<"Enter ["<< i+1 <<"][" << j+1 <<"] element in the matrix: ";
cin>>matrix[i][j];
}
}
cout<<"This is the inputted matrix"<<endl;
printMat(matrix,n);
for(int i=1;i<n;i++)
{
int z=0;
for(int j=0;j<i;j++)
{
fact=matrix[i][j]/matrix[z][j];
for(int k=0;k<n+1;k++)
{
matrix[i][k]=matrix[i][k]-(fact*matrix[z][k]);
}
z++;
}
}
cout<<"Value after Row Transformation : "<<endl;
printMat(matrix,n);
output[n-1]=matrix[n-1][n]/matrix[n-1][n-1];
for(int i=n-2;i>=0;i--)
{
float sum=0;
for(int j=n-1;j>i;j--)
sum=sum + (matrix[i][j]*output[j]);
output[i]=(matrix[i][n]-sum)/matrix[i][i];
}
for(int i=0;i<n;i++)
cout<<"Value of x"<< i+1<< "is\t"<< output[i]<<endl;
return 0;
}
