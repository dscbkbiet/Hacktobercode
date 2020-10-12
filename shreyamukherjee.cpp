#include<iostream>
using namespace std;

int sum(int x,int y)
{
	return (x+y);
}

int main()
{
	int a,b;
	cout<<"Enter 1st number:";
	cin>>a;
	cout<<"Enter 2nd number:";
	cin>>b;
	cout<<"sum of "<<a<<" and "<<b<<" :"<<sum(a,b);
	retrun 0;
}
