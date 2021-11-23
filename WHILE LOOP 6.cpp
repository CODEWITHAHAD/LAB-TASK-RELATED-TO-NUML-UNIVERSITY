#include<iostream>
using namespace std;
int main()
{
	int a;
	int n;
	cout<<"enter your number:";
	cin>>a;
	while(n<=10)
	{
		cout<<a<<"*"<<n<<"="<<a*n<<endl;
		n++;
	}
	return(0);
}
