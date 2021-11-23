#include<iostream>
using namespace std;
int main()
{
	int n=0;
	int limit;
	int sum;
	cout<<"enter your limit";
	cin>>limit;
	do
	{
		sum=sum+n;
		n++;
	}
	while(n<=limit);
	cout<<sum;	
	return(0);
}
