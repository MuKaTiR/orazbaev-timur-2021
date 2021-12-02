#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
	int a = 0;
	int sum = 0;
	int i = 0;

	while (i <= 9)
	{
		i++;
		cin >> a;
		sum = sum + a;
	}

	cout << sum / 100;
	return EXIT_SUCCESS;
}