#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
	int a = 0;
	int minutes = 0;
	int hours = 0;
	cin >> a;

	minutes = a * 45 + a / 2 * 5 + (a - 1) / 2 * 15;
	hours = minutes / 60;
	minutes = minutes - hours * 60;

	cout << 9 + hours << " " << minutes;

	return 0;

	return EXIT_SUCCESS;
}