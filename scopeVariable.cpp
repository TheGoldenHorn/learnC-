#include<iostream>

using namespace std;

int globalVar = 100;
int x = 500;
int main(){
	int x = 200;

	cout<<" global x is 500 and local is 200 "<<"x = "<<x;

	cout<<endl<<"globalVar "<<globalVar<<endl;

	return 0;
}
