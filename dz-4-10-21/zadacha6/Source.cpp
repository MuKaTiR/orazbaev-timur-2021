
#include <iostream>

using namespace std;


int main()
{
	int n, x, plus = 0, minus = 0, nol = 0;

	cin >> n;

		for (int i = 0; i < n; i++)
		{
			cin >> x;

			if (x = 0)
			{
				nol = nol + 1;
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
