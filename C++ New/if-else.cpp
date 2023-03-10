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
	
	if(input < 3) 
	{
		cout << "Reach level 10 to unlock these options." << endl;
	}
	
	if(input == 3,4,5,6)
	
	{
		cout << "Selecting the choosen option..." << endl;
		
		if(input == 3) 
		{
			cout << "Editing character..."  << endl;
		}
	    
	    if(input == 4)
	    {
	    	cout << "Seaching character..." << endl;
		}
		
		if(input == 5)
		{
			cout << "Viewing character..." << endl;
		}
		
		if(input == 6)
		{
			cout << "Quitting..." << endl;
		}
	} 
	
	if(input < 7) 
	{
	}else 
	{	
		cout << "INVALID NUMBER" << endl;
	}
	
    

	return 0;
}
