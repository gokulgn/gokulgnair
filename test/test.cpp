#include <iostream>
#include <vector>
/* print integers from vector */
using std::vector;
using std::cout;
using std::endl;
using std::cin;

/*
* main code begins
*/
int main()
{
/* store integers in a vector from standard input */
vector<int> myarr; // our container
int token; // our container content variable
cout << "Please enter integers, followed by <CTRL><D>:" << endl;
// invariant: fill is the integer to be stored
while (cin >> token)
{
myarr.push_back(token);
}
cout << endl << endl;
cout << "Your integers are:" << endl;
for (vector<int>::size_type j=0; j != myarr.size(); ++j)
{
cout << myarr[j] << endl;
}
cout << endl;

/* exit happily */
/* find the largest element, manually */
int max = myarr[0];
int next;
vector<int>::size_type i=1;
while (i != myarr.size())
{
next = myarr[i];
if (max < next)
{
max = next;
}
++i;
}
cout << endl << "... and your largest integer is: " << max << endl << endl;
return 0;
}
