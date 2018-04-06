#include<iostream>
using namespace std;
int main(){
	int a,b,result, diff;
	cout<<"Enter two numbers to check which is larger\n";
	cin>> a>>b;
	result = a>b?a:b;
	diff = result==a?a-b:b-a;
	cout<<result<<" is greater by "<<diff<<endl;

}