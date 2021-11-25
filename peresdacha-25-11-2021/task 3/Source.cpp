#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
	int n = 0;
	int i = 0;
	int j = 0;
	int b = 0;
	int z = 0;
	cin >> n;

	for (i = 1; i <= n; i++)
	for ( j = 1; j <= n; j ++)
	{
		cin >> b;
		z += b;
	}

	cout << z / 2;

	return 0;

	return EXIT_SUCCESS;
}