﻿#include <iostream>

using namespace std;

int main()
{
	int n = 0;
	int sum = 0;

	cin >> n;

	for (int i = 0; i <= n; i++)
	{
		sum = sum + i;
	}
	
	cout << sum;

	return EXIT_SUCCESS;
}