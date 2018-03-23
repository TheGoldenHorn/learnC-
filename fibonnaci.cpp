#include<iostream>
#include<cstdio>
//include all c++ header files 
//#include<bits/stdc++.h>
using namespace std;
int main() {
	int i=0,j=1,sum=0;
	for(int k=1;k<=10;k++){
		cout<<"for "<<k<<"\t fib "<<i<<endl;
		sum=i+j;
		i=j;
		j=sum;

	}
	return 0;
}