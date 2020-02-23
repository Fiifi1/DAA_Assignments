#include <iostream>
using namespace std;
int main ()
{
int mn,mx;
const int Numb = 10;
int a[Numb]; //10 elements
cout<<"Enter 10 values:"; //prompts user for 10 values.
for(int i=0;i<10;i++)
{
cout<< "\nEnter value: ";
cin>> a[i]; // puts values in array
}

mn=a[0];
mx=a[0];
for(int i=1;i<10;i++)
	{
		if(mn>a[i])
		{
			mn=a[i];
		}
		else if(mx<a[i])
		{
			mx = a[i];
		}
	}

cout<<"Maximum number is: "<< mx << endl;
cout<<"Minimum number is: "<< mn << endl;

return 0;

}