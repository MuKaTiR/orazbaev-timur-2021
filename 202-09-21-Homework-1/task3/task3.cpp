#include <iostream>

using namespace std;

int main()
{
	int a = 0;
	int b = 0;
	cin >> a >> b;
	cout << b - (b / a)*a;
	return EXIT_SUCCESS;
}