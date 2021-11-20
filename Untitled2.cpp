#include<iostream>
using namespace std;
int main()
{
	char ch;
	cout<<"enter your character";
	cin>>ch;
	if((ch>=65)&&(ch<=90))
	{
		cout<<"the character you enter is in uppercase:"<<ch<<endl;
	}
	else if((ch>=97)&&(ch<=122))
	{
		cout<<"the character you enter is in lowercase:"<<ch<<endl;
	}
	else
	{
		cout<<"you enter a special charactor or something else!:"<<endl;
	}
	return(0);
}
