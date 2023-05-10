#include<iostream>
using namespace std;

//Write a macro program that takes a numberand converts it into binary code

//#define N(b, count) (while (b){ \
//(b /= 2); \
//count++; } \
//return count)

int main()
{
	int a = 0, x = 0, temp = 0, d = 1;
	int count = 0, size = 0;

	cout << "\n Enter value: ";
	cin >> a;

	while (a)
	{
		temp = a % 2;
		temp *= d;
		x += temp;

		a /= 2;
		/*if(a) 
			x *= d;*/
		d *= 10;
	}

	cout << x << endl;

	return 0;
}