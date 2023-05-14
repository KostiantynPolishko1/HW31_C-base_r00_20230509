#include<iostream>
#include<cstdint>
using namespace std;

//Write a macro program that takes a numberand converts it into binary code

#define BINARY(a) \
    int i = 0, binary = 0, temp = 0, d = 1; \
    while (a) { \
	temp = a % 2; \
	temp *= d; \
        binary += temp; \
        a /= 2; \
		d *= 10; \
    } \
cout << "\n\tBinary code: " << binary << endl;

int checkV()
{
	
	int a;
	while (true) // the cycle continues until the user enters the correct value
	{
		cin >> a;
		if (cin.fail()) // if the previous extraction was unsuccessful,
		{
			cout << "\tIncorrect input. \n Enter int value: ";
			cin.clear(); // then return the cin to 'normal' mode of operation
			cin.ignore(32767, '\n'); // and remove the previous input values from the input buffer
		}
		else // if all is well, return a
		{
			cin.ignore(32767, '\n'); // and remove the previous input values from the input buffer
			return abs(a);
		}
	}

	return 0;
}

int main()
{
	int value = 0, bin = 0;
	cout << "\n    Enter int value: ";
	value = checkV();

	if (value == 0)
	{
		bin = 0;
		cout << "\n\tBinary code: " << bin << endl;
		return 0;
	}

	if (value == 1)
	{
		bin = 0;
		cout << "\n\tBinary code: " << bin << endl;
		return 0;
	}
	
	BINARY(value);

	return 0;
}