
#include<stdio.h>
int main()
{
	int loadarr[]= {45,8555,545,5,44};
	int large = iLargest();
	printf("%d",large);
}
int iLargest(int *arr, size_t L)
{
int max=0;
for(int i=0;i<L;i++)
{
if(max<(*arr+i))
max=*(arr+i);
}
return max;
}
