#include<iostream>
#include<cstdio>
//include all c++ header files 
//#include<bits/stdc++.h>
using namespace std;
int main() {
	int i=1,j=1,sum=0;
	for(k=1;k<=10;k++){
		cout<<i<<endl;
		sum=i+j;
		i=j;
		j=sum;

	}
	return 0;
}