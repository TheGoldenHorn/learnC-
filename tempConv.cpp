#include<iostream>
//#include<conio>
using namespace std;
int main()
{	//clrscr();
	int choice;
	float temp, tempConv;

	cout<<"\nTemperature Conversion Menu \n\n"<<//
	"1. Fahrenheit to Centigrade \n"//
	<<"2. Centigrade to Fahrenheit \n\n" //
	<<"Enter your choice: ";
	cin>>choice;

	if(choice==1)
	{
		cout<<"Enter Temperature in Fahrenheit: ";
		cin>>temp;
		tempConv = (temp-32) / 1.8;
		cout<<"\nThe Temperature in Centigrade is: "<<tempConv<<endl;

	}
	else if(choice==2)
	{
		cout<<"Enter Temperature in Centigrade: ";
		cin>>temp;
		tempConv = 1.8 * temp + 32;
		cout<<"\nThe Temperature in Fahrenheit is: "<<tempConv<<endl;
	}
	else
	cout<<"\nIncorrect choice"<<endl;

	return 0;
}
