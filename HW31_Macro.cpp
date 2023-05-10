#include<iostream>
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

int main()
{
	int a = 0;

	cout << "\n Enter value: ";
	cin >> a;

	cout << BINARY(a) << endl;

	return 0;
}