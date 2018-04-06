#include<iostream>
using namespace std;

int main(){
//define type
//int cqn be changed to any keyword; new keyword will act as int
typedef int feet;
	feet height = 5;
	typedef char word;
	word alpha = 'a';
	cout<<"typedef int to feet: "<<height<<endl;
	cout<<"typedef char to word: "<<alpha<<endl;
}

