#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int n=1;
	while(n<=5)
	{
		cout<<n<<setw(10)<<n*n<<endl;
		n++;
	}
	return(0);
}
