#include<iostream>
#include<cstdio>
#include<iomanip>
/*//include all c++ header files 
#include<bits/stdc++.h>
*/
// for using of std functions like cout, cin, etc.
using namespace std;

int main() {
	int arry[10];
	for(int i = 0; i<10; i++){
		arry[i] = i + 100;}
	cout<<"Element"<<setw(15)<<"Value"<<endl;
	
	for(int j=0;j<10;j++){
		cout<<setw(7)<<j<<setw(15)<<arry[j]<<endl;} 
	// return 0 because main is with int and it need to return an int value
	return 0;
			}

