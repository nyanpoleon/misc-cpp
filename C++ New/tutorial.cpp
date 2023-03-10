#include<iosteam>
// this it what at the begining of every program
#inlcude<iomanip>
// if you want to alter the size of certain string or integer
#include<limits>
// to find limits of an integer
using namespace std;
//?? gotta find

/*
== equals to
!= not equals to 
|| or
&& and
< smaller than
=< smaller than equal to
> greater than
=> greater than equal to 
*/

int main() // that is how we start
{
	// use curly brackets for wrting programmes.
	
	cout << "Demo of cout" << endl; 
	// here ';' acts as a fullstop
	// 'endl' lets us switch to the next line
	cout << "Demo of using flush" << flush
	// flush is used if you don't want to switch to next line
	
	int value; // its to define the term 'value' belongs to an integer
	string text; // its to define the term 'text' belongs to letters
	
	double dValue; // int only can store certain number of digits to make the numbers double, 'double' is used
	long lValue; // 'long' just means long, it can store long digits
	// long and double can be also used for 'strings'
	
	cout << "Max int value: " << INT_MAX << endl; // to know maximum value
	cout << "Min int value: " << INT_MIN << endl; // to know minimum value
	
	bool // used for 'true' or 'false'
	char // used for special characters

	if() {
	} else {
	}
	
	/*
	if (value1 >= 5) {
		cout << "Condition 1: True" << endl; 
	} else { 
	    cout << "Condition 1: False" << endl;
	}
	*/
	
	return 0; // signifies the end of the programme
}



