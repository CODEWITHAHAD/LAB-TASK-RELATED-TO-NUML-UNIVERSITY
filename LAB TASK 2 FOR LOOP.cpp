#include<iostream>
using namespace std;
int main()
{
	int n=1;
	int limit;
	int sum;
	cout<<"enter your limit";
	cin>>limit;
	while(n<=limit)
	{
		sum=sum+n;
		n++;
	}
	cout<<sum;
	return(0);
}
