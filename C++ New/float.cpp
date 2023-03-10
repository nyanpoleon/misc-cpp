#include<iostream>
#include<iomanip>

using namespace std;

int main()

{
	float value = 76.4;
	
	cout << sizeof(float) << endl;
	cout << setprecision(20) << fixed << value << endl;
	
	double dvalue = 76.4;
	cout << setprecision(20) << fixed << dvalue << endl;
	
	return 0;
}
