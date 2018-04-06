#include<iostream>
#include<cstdio>
//include all c++ header files 
//#include<bits/stdc++.h>
using namespace std;
int main() {

	//pointer

	int i = 101;
	int* a = &i;
	//*a = i;

	
	cout<<char(*a)<<endl<<float(i+i*(*a))<<endl;

	cout<<*a<<endl;

//reference	
int &ref = i;
cout<<char(float(int(double(char(ref))+1)+3)+9)<<endl<<endl;
cout<<char(ref)<<endl;
ref += 23;
cout<<"ref: "<<ref<<endl;
cout<<i<<endl;
/* will throw redeclaration error
int ro = 234;
int &ref = ro;
*/
//extended pointer 
	char hello[] = "Hello";
	char *p = hello;

	while(*p){
		*p += 1;
		p += 1;
	}
	cout<<hello<<endl;
	return 0;

}