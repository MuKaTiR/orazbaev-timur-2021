#include <iostream>

using namespace std;

int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	cin >> a, b;
	c = a;
	a = b;
	b = c;
	cout << a << b;

	return EXIT_SUCCESS;
}