#include <iostream>

using std::endl;
using std::cout;

int main()
{
	cout << "float | 3.4 * 10 ^ -38 -- 3.4 * 10 ^ +38 | 6-7 | 32 bits" << endl;
	float f = 1.6; 
	cout << f << endl;
	cout << "double | 1.7 * 10 ^ -308 -- 1.7 * 10 ^ 308 | 15-16 | 64 bits" << endl;
	double d = 1.61231; 
	cout << d << endl;
	cout << "char | -128 -- 127, or 0 -- 255 | 8 bits" << endl;
	char c = 'j'; 
	cout << c << endl;
	cout << "int | -32768 -- 32767 (if 2 bytes) or -2 147 483 648 -- 2 147 483 647 (if 4 bytes) | from 2 to 4 bytes" << endl;
	int i = 54; 
	cout << i << endl;
	cout << "short | -32768 -- 32767 | 16 bits" << endl;
	short s = 30000; 
	cout << s << endl;
	cout << "long | -2 147 483 648 -- 2 147 483 647 | 32 bits" << endl;
	long l = 12876232; 
	cout << l << endl;
	cout << "long long | -9 223 372 036 854 775 808 -- 9 223 372 036 854 775 807| 64 bits" << endl;
	long long L = 543534756375; 
	cout << L << endl;
	cout << "bool | 2 | 1 byte " << endl;
	bool b = {false};
	cout << b << endl;	
}
