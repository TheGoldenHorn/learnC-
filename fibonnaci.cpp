#include<iostream>
#include<cstdio>
//include all c++ header files 
//#include<bits/stdc++.h>
using namespace std;
int main() {
	int n1=0;
	int n2=1;
	for(int i=0;i<11;i++){
		std::cout<<n1<<endl;
		int sum=n1+n2;
		n1=n2;
		n2=sum;
	}
	return 0;
}
