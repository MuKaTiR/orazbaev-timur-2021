using namespace std;

#include <iostream>

int main()
{
	int m = 0;
	int n = 0,
	int k = 0;

	cin >> k;
	for (int i = 1; i <= k; i++)
	{
		cin >> n >> m;
		cout << 19 * m + (n + 239)*(n + 366) / 2 << endl;
	}
	return EXIT_SUCCESS;
}

