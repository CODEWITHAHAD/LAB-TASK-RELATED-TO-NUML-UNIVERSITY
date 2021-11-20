#include<iostream>
using namespace std;
int main()
{
	char ch;
	cout<<"enter your character:";
	cin>>ch;
	if((ch>=65)&&(ch<=95))
	{
		cout<<"your character is in upper-case:"<<ch<<endl;
	}
	else if((ch>=97)&&(ch<=122))
	{
		cout<<"your character is in lower-case:"<<ch<<endl;
	}
	else
	{
		cout<<"invalid entry";
	}
}
