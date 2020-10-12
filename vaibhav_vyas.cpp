#include<iostream>
using namespace std;

int sub(int x,int y){
return x-y;
}

int main(){
	int a,b;
	cout<<"Enter first number:";
	cin>>a;
	cout<<"Enter second number:";
	cin>>b;
	cout<<"Difference of "<<a<<" and "<<b<<" :"<<sub(a,b);
	retrun 0;
}