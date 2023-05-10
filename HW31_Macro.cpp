#include<iostream>
#include<cstdint>
using namespace std;

//Write a macro program that takes a numberand converts it into binary code

#define BINARY(a) (int x = 0, temp = 0, d = 1;\
while(a) { \
	temp = a % 2;\
	temp *= d;\
	x += temp;\
	\
	a /= 2;\
	d *= 10; \
}\
return x;\
)


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
	int value = 0, binary = 0;

	cout << "\n    Enter int value: ";
	value = checkV();

	if (value == 0)
	{
		binary = 0;
		goto end;
	}

	if (value == 1)
	{
		binary = 0;
		goto end;
	}

	//binary = BINARY(value);
end:
	cout << "\n\tBinary code: " << binary << endl;
	
	return 0;
}