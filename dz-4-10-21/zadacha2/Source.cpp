
#include <iostream>

using namespace std;

int main()
{
	int c, n, f;
	f = 1;
	c = 0;
	cin >> n;
	if (n > 0)
	{
		while (c < n)
		{
			f = 2 * f;
			c = c + 1;

		}
		cout << f;
	}
	else
	{
		cout << 0;
	}


	return EXIT_SUCCESS;
}
