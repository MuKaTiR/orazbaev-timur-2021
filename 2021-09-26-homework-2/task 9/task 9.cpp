

#include <iostream>

using namespace std;

int main()
{
	int x = 0;
	int y = 0;
	int m = 0;
	int n = 0;

	cin >> m >> n >> x >> y;

	if (x != 1)
	{
		cout << x - 1 << " " << y;
		cout << endl;
	}
	if (x != m)
	{
		cout << x + 1 << " " << y;
		cout << endl;
	}if (y != 1)
	{
		cout << x << " " << y - 1;
		cout << endl;
	}if (y != n)
	{
		cout << x << " " << y + 1;
		cout << endl;
	}

	return EXIT_SUCCESS;
}

