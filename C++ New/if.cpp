#include<iostream>
using namespace std;

int main() 

{
	string password = "hello";
	cout << "Enter your password > " << flush;
	
	string input;
	cin >> input;
	cout << "'" << input << "'" << endl;
	
	if(input == password)
	{
		cout << "Password accepted" << endl;
	}
	
	if(input != password) 
	{
		char value = 7;
		cout << "Access denied" << value << endl;
	}
	return 0;
	
}
