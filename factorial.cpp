#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	
	int n;
	//  "n = 1754" is the maxmimum value for this program
	cout<<"Enter a number to find its factorial: ";
	cin>>n;
	
	long double fact = n;

	for(int i=1;i<n;i++){
		fact = fact*i;
		//cout<<fact<<endl;
	}
	cout.setf(ios::fixed);
	//cout.setf(ios::showpoint);
	cout<<endl<<setprecision(1)<<fact<<endl;
}