#include<iostream>
using namespace std;

int main ()
{
	int values[3] = {88 , 123, 7}; //it's called an array.
	
	cout << "Array of Integers" << endl;
	cout << "=================" << endl;
	
	for(int i=0; i<3; i++)
	{
		cout << "Values " << i << ": " << values[i] << endl;
	}
	/*
	values[0] = 88;
	values[1] = 123;
	values[2] = 7;
	
	cout << values[0] << endl;
	cout << values[1] << endl;
	cout << values[2] << endl;
	*/
	
	//cout << "Bad Idea: " << values[3] << endl;
	
	cout << "Array of doubles" << endl;
	cout << "=================" << endl;
	
	double numbers[4] = {4.2 , 5.6, 8.1, 3.3,};
	
	for(int i=0; i<4; i++)
	{
		cout << "Element index " << i << ": " << numbers[i]<< endl;
		
	}
	cout << "Initializing with zero values" << endl;
	cout << "=============================" << endl;
	
	int numberArray[8] = {};
	
	for(int i=0; i<8; i++) 
	{
		cout << "Element index " << i << ": " << numberArray[i]<< endl; 
	}
	cout << "Initializing with strings" << endl;
	cout << "=========================" << endl;
	
	//Array of strings
	
	string texts[] = {"Apple" , "Banana" , "Orange"};
	
	for(int i=0; i<3; i++)
	{
			cout << "Element index " << i << ": " << texts[i]<< endl; 
	} 
			for(int i=0; i<3; i++)
			{endl;
			
			for(int j=0;j<i;j++)
			
	{
			cout << "*" ; 
	} 
}
	return 0;
}
