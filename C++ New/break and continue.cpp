#include<iostream>
using namespace std;

int main()

/* "break"
{
	for (int i;i<5;i++)
	{
		cout << "i is " << i << endl;
		if (i==3) 
		{
			break;
		}
		cout << "Looping..." << endl;
		
	}
	return 0;
}
*/

/* "continue"
{
	for (int i;i<5;i++)
	{
		cout << "i is " << i << endl;
		if (i==3) 
		{
			continue;
		}
		cout << "Looping..." << endl;
		
	}
	return 0;
}
*/

{
	const string password = "hello"; 
	string input;
	
	do
	{
		cout << "Enter your password - " << flush;
	    cin >> input;
		
		if(input == password)
		{
			break;	
		} else 
			{
				cout << "Access Denied" << endl;
			}
	} while(true);

	
	cout << "Permission Granted" <<endl;
	
	cout << "quitting..." <<  endl;

	
	return 0;
}
