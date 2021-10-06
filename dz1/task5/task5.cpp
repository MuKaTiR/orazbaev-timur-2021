#include <iostream>

using namespace std;

int main()
{
	int a = 0;
	cin >> a;
	cout << a / 100 + (a - a / 100 * 100) / 10 + (a - a / 10 * 10);
	return EXIT_SUCCESS;
}