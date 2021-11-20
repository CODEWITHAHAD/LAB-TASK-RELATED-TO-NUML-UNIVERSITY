#include<iostream>
using namespace std;
int main()
{
	int a,b,c,sa,sb,sc;
	cout<<"enter 1st side:";
	cin>>a;
	cout<< "enter 2nd side:";
	cin>>b;
	cout<< "enter 3rd side:";
	cin>>c;
	sa=a*a;
	sb=b*b;
	sc=c*c;
	if((sa=sb+sc)||(sb=sa+sc)||(sc= sb+sa))
	{
		cout<<"Triangle is 	right angled";
	}
	else
	{
		cout<<"The Triangle is not	right angled";
	}
	return(0);
}
