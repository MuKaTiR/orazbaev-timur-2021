#include <iostream>

using namespace std;

int main()
{
	int v = 0;
	int t = 0;
	cin >> v >> t;
	cout << (109 + v * t - (v*t / 109) * 109) - (109 + v * t - (v*t / 109) * 109) / 109 * 109;
	return EXIT_SUCCESS;
}
