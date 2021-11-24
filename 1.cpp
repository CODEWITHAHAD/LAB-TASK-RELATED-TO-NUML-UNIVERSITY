#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter your number:";
	cin>>n;
	if(n>=10)
	{
		cout<<"square of number:"<<n*n<<endl;
	}
	else
	{
		cout<<"cube of number:"<<n*n*n<<endl;
	}
	return(0);
}
