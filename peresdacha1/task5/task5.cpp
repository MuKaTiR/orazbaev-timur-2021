#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
	int i = 0;
	int n = 0;
	int s = 0;
	int a[1000];

	cin >> n;
	for (i = 0; i < n; i++)
	cin >> a[i];
	s = a[0] + a[n - 1] + ((a[1] > a[n - 2]) ? a[1] : a[n - 2]);
	for (i = 1; i < n - 1; i++)
		if (a[i - 1] + a[i] + a[i + 1] > s)s = a[i - 1] + a[i] + a[i + 1];
	cout << s;

	return 0;

	return EXIT_SUCCESS;
}