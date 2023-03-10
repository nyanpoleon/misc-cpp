#include<iostream>
using namespace std;

int main() 

{
	const string password = "hello"; //the term 'const' means constant, now the value of the string password cannot be changed in code.
	string input;
	
	do
	{
		cout << "Enter your password - " << flush;
	    cin >> input;
		
		if(input != password)
		{
		cout << "Access Denied" << endl;	
		} 
	} while(input != password);
	
	cout << "Permission Granted" <<endl;

	
	return 0;
}
