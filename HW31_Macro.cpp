#include<iostream>
using namespace std;

//Write a macro program that takes a numberand converts it into binary code

int main()
{
	int a = 0, b = a, x = 0;
	int count = 0, size = 0;

	cout << "\n Enter value: ";
	cin >> a;

	while (b)
	{
		b /= 2;
		count++;
	}
	size = count;

	int* arr = new int[count];

	while (size)
	{
		size--;
		arr[size] = a % 2;
		a /= 2;
	}

	for (int i = 0; i < count; i++)
	{
		x += arr[i];
		if(i < count-1) x *= 10;
	}
	cout << x << endl;

	delete[] arr;

	return 0;
}