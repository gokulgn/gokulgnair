#include<stdio.h>
#include<math.h>

double fact(int a)                                                       //function to calculate factorial of a number
{
double product=1;
for(int i=0;a!=0;i++)
{
product=product * a--;
}
return product;
}

int main()
{
int n=1;
double e=2.71828;
double rn;
double a;
printf("Enter the value of a : ");					     //take input from the user for the value of a
scanf("%lg",&a);
for(double c=0;c<=10.5;c=c+0.5)                                              //check for a wide value of c
{
printf("Value of c is : %lg\n",c);
n=1;
for(int i=0;i<100;i++)
{
rn=((pow(e,c)*pow((10.5-a),n+1))/(fact(n+1)));                               //Rn=(e^c*(10.5-a)^(n+1))/(n+1)!
printf("%d: Rn = is %12lg\n",n,rn);
n++;
if(rn<pow(10,-12))							    //stop computing the value of Rn once it exceeds 10^-12
{
break;
}
}
printf("There are %d terms\n",n);					   //display number of itreations taken for each value of c
}
printf("Value of e^10.5 is %12lg\n",pow(e,10.5));                           //calculate the value of e^10.5
return 0;
}
