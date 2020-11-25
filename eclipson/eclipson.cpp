#include <iostream>
#include <cfloat>
using namespace std;


void Epsilon(float EPS)
{

   float previousepsilon;


   while ((1+EPS) != 1)
   {

       previousepsilon = EPS;


       EPS /=2;
   }

      cout << "Epsilon is : " << previousepsilon << endl;
}
int main()
{
float x;
cout << "Enter the float number" << endl;
cin >> x;
Epsilon(x);
}
