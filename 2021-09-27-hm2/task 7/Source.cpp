﻿#include <iostream>

using namespace std;

int main()
{
	int n, m, k;
	cin >> n;
	cin >> m;
	cin >> k;
	if (k < n*m && ((k % n) == 0) || (k % m == 0)) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}
	

	return EXIT_SUCCESS;
}