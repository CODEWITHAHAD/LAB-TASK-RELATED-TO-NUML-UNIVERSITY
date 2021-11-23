#include<iostream>
using namespace std;
int main()
{
	int n;
	char ch;
	cout<<"enter your number:";
	cin>>n;
	while(ch!='n')
	{
		cout<<"square root of number is:"<<n*n<<endl;
		cout<<"are you want to continue Y/N"<<endl;
		cin>>ch;
	}
	return(0);
}
