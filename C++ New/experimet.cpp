#include<iostream>
using namespace std;

int main()
{
	
	int i;
	cout << "enter a number> " ;
	cin >> i;
	
	for(int j = 0; j < i; j++)
	{   
	cout << "" << endl;
		
		for(int k1 = 0;k1 <= i - j - 1; k1++)
		
		cout << "  " ;
			
		for(int k2 = 0; k2 < 2 * j + 1; k2++)
		        
		cout << "**" ;
		
		cout << endl;
	}
	/*
	for(int j=0; j<i; j++)
	{   cout << "" << endl;
		for(int k=0;k<i-j;k++)
		cout << "**" << flush;
	}
	*/
	
	
return 0;

}
