#include<iostream>
using namespace std;
int main() {
   int i,j,k,n;
   float p[10][10],q,x[10];
   printf("\nEnter the number of equation: ");
   scanf("%d",&n);
   printf("\nEnter the elements of matrix (row wise):\n");
   for(i=1; i<=n; i++)
   {
      for(j=1; j<=(n+1); j++)
      {
         cout << "S[" << i << ", " << j << " ]=";
         cin >> p[i][j];
      }
   }
   for(j=1; j<=n; j++)
   {
      for(i=1; i<=n; i++)
      {
         if(i!=j)
         {
            q=p[i][j]/p[j][j];
            for(k=1; k<=n+1; k++)
            {
               p[i][k]=p[i][k]-q*p[j][k];
            }
         }
      }
   }
   cout<<"\nThe values of unknowns are :\n";
   for(i=1; i<=n; i++)
   {
      x[i]=p[i][n+1]/p[i][i];
      cout<<"x"<<i << "="<<x[i]<<" ";
   }
   return(0);
}
