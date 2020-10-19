#include<iostream>
using namespace std;

int sum(int x,int y){
//write your code here
return(x+y);
}

int multiply(int x,int y){
	return(x*y);
}

int main(){
	int a,b;
	cout<<"Enter first number:";
	cin>>a;
	cout<<"Enter second number:";
	cin>>b;
	cout<<"sum of "<<a<<" and "<<b<<" :"<<sum(a,b);
	cout<<"multiplication of "<<a<<" and "<<b<<" :"<<multiply(a,b);
	retrun 0;
}
