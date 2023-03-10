#include<iostream>
using namespace std;

int main()
{
	cout << "'''''WECOME TO CHARACTER MENU'''''" << endl;
	cout << " " << endl;
	
	cout << "1.\tAdd character" << endl;
	cout << "2.\tDelete character" << endl;
	cout << "3.\tEdit character" << endl;
	cout << "4.\tSearch character" << endl;
	cout << "5.\tView character" << endl;
	cout << "6.\tQuit character menu" << endl;
	
	cout << "Please select an option >>" << flush;
	
	int input;
	cin >> input;
	
	
	if(input == 1) 
	{
		cout << "Adding character..." << endl;
	}
	else if(input == 2) 
	{
		cout << "Deleting character..." << endl;
	}
	else if(input == 1) 
	{
		cout << "Editing character..." << endl;
	}
	else if(input == 1) 
	{
		cout << "Searching character..." << endl;
	}
	else if(input == 1) 
	{
		cout << "Viewing character..." << endl;
	}
	else if(input == 1) 
	{
		cout << "Quitting..." << endl;
	}
	else 
	{
		cout << "INVALID OPTION" << endl;
	}
	
return 0;
}
