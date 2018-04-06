#include<iomanip>  //for formatting output using setw and setprecision
#include <stdio.h>   //for using "put"; predefined library function 
#include<iostream> //for using ostream function "cout"
using namespace std;
int main()
{
	/* code */
	cout.setf(ios::fixed);
	cout<<setprecision(2)<<5.56335<<endl;
	cout.unsetf(ios::fixed);

	cout
	<</*set max allowed digits: notice rouding*/
	setprecision(5)
	<</*to set spacing from margin*/
	setw(20)
	<<53.56334
	<<endl;

	puts("We are using the \"puts\" function here.");
	fflush(stdout);

	return 0;
}