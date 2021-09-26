#include <iostream>

using namespace std;

int main()
{
	int k, m, n, t;
	cin >> k;
	cin >> m;
	cin >> n;
	if (n <= k) {
		cout << 2 * m;
	}
	else {
		if ((n * 2) % k == 0) {
			cout << m * ((n * 2) / k);
		}
		else {
			cout << m * (1 + ((n * 2) / k));
		}
	}

	return EXIT_SUCCESS;
}