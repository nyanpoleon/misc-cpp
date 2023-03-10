#include<iostream>

using namespace std;

int main ()
{
	bool bValue = true;
	cout << bValue << endl;
	
	char cValue = 56; 
	cout << "The cValue is:" << cValue << endl;
	
	char fValue = '7';
	cout << "The fValue is:" << (int)fValue << endl;

	cout << "Size of char: " << sizeof(char) << endl;
	
	wchar_t wValue = 'i';
	cout << "The wValue is:" << (int)wValue << endl;
	cout << "Size of wchar_t: " << sizeof(wchar_t) << endl;
	
	return 0;
}
