#include<iostream>
using namespace std;

void fun(int a)
{
	cout << a << "\n";
	a = 7;
	cout << a << "\n";
}

int main()
{
	int a = 9;
	cout << a << "\n";

	fun(a);
	cout << a << "\n";

	return 0;
}

