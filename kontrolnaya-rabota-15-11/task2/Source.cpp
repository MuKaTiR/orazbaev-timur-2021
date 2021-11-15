#include <iostream>

using namespace std;

int main()
{

	int mx = -10000, mn = 10000, a, k = 0;

	while (cin >> a)
	{

		k += 1;

		if (k % 2 == 0)
		{

			if (mx < a) mx = a;

		}
		else { if (mn > a) mn = a; }
	}

	cout << mn + mx;

	return 0;

}