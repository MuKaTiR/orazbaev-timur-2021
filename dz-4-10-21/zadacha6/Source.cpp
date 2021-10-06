
#include <iostream>

using namespace std;


int main()
{
	int n = 0;
	int x = 0;
	int nol = 0;
	int plus = 0;
	int minus = 0;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> x;

		if (x == 0)
		{
			nol++;
		}

		if (x > 0)
		{
			plus++;
		}

		if (x < 0)
		{
			minus++;
		}
	}

	cout << nol << " " << plus << " " << minus;
	return EXIT_SUCCESS;
}
