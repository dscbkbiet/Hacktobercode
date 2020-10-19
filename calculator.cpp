#include <bits/stdc++.h>
#include<iostream>
#include<cmath>
#include<algorithm>
#include<conio.h>

using namespace std ;

int main(){
  float a,b,result;
  char o;
  cout<<"Enter the arithmetic operation (+, -, *, /) which you want to perform";
  cin>>o;
  cout<<"Enter the first no.";
  cin>>a;
  cout<<"Enter the second no.";
  cin>>b;
  if (o == "+"){
    result = a + b;
    cout<<result<<endl;
    return 0;
    }
  if (o == "-"){
    result = a - b;
    cout<<result<<endl;
    return 0;
    }
  if (o == "*"){
    result = a * b;
    cout<<result<<endl;
    return 0;
    }
  if (o == "/"){
    result = a / b;
    cout<<result<<endl;
    return 0;
    }
