
#include <iostream>

using namespace std;

int main()
{
	int c = 0;
	int n = 0;
	int f = 1;
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
		cout << 1;
	}


	return EXIT_SUCCESS;
}
