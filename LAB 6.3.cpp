#include<iostream>
using namespace std;
int main()
{
	int num1,num2,opr;
	int factorial=1;
	cout<<"enter the value of num1:";
	cin>>num1;
	cout<<"enter your operator:"<<endl;
	cout<<"1:EVEN AND ODD NUMBER:"<<endl;
	cout<<"2:PRIME NUMBER:"<<endl;
	cout<<"3:FACTORIAL OF THE NUMBER:"<<endl;
	cout<<"4:EXIT:"<<endl;
	cin>>opr;
	switch(opr)
	{
		case 1:
			if(num1%2==0)
			{
				cout<<"your number is even:";		
			}
			else
			{
				cout<<"your number is odd:";
			}
			break;
		case 2:
			if(num1%2==1)
			{
				cout<<"your number is prime number:";
			}
			else
			{
				cout<<"your number is not a prime number:";
			}
			break;
		case 3:
			for(int i=1;i<=num1;i++)
			{
				factorial=factorial*i;
			}
			cout<<factorial;
			break;
		case 4:
			cout<<"EXIT";
			break;
		default:
			{
				cout<<"invalid operator:";
			}
	}	
}
