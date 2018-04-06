#include <iostream>
using namespace std;

int main(){
	char oper;
	int a,b,result;

	cout<<"Basic calculator with two operands\n\n";
	cout<<"Enter two operands: \n";
	cin>>a>>b;
	
	cout<<"Enter the symbol for the operation to be performed\t"//
	<<" *, /, +, - \n";

	cin>>oper;
	if(oper=='*'){
		result = a * b;

	}
	else if(oper=='/'){
		result = a / b;
	}
	else if(oper=='+'){
		result = a + b;
	}
	else if(oper=='-'){
		result = a - b;
	}
	else {
		cout<<"Invalid Choice";
		goto STOP;
	}
	cout<<"The result is "<<result<<endl;
	STOP:
	return 0;
}