#include <iostream>

int main()
{
	std::cout << "float | +/- 3.4E-38 -- 3.4E+38 | 32 bits" << std::endl;
	float f = 1.6; 
	std::cout << f << std::endl;
	std::cout << "double | +/- 1.7E-308 -- 1.7E+308 | 64 bits" << std::endl;
	double d = 1.61231; 
	std::cout << d << std::endl;
	std::cout << "char | -128 -- 127, or 0 -- 255 | 8 bits" << std::endl;
	char c = 101; 
	std::cout << c << std::endl;
	std::cout << "int | -32768 -- 32767 (if 2 bytes) or -2 147 483 648 -- 2 147 483 647 (if 4 bytes) | from 2 to 4 bytes" << std::endl;
	int i = 54; 
	std::cout << i << std::endl;
	std::cout << "short | -32768 -- 32767 | 16 bits" << std::endl;
	short s = 30000; 
	std::cout << s << std::endl;
	std::cout << "long | -2 147 483 648 -- 2 147 483 647 | 32 bits" << std::endl;
	long l = 12876232; 
	std::cout << l << std::endl;
	std::cout << "long long | -9 223 372 036 854 775 808 -- 9 223 372 036 854 775 807| 64 bits" << std::endl;
	long long L = 543534756375; 
	std::cout << L << std::endl;
	std::cout << "bool | 2 | 1 bit " << std::endl;
	bool b = {false};
	std::cout << b << std::endl;
	
}