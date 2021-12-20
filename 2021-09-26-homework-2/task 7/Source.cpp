#include <iostream>

using namespace std;

int main()
{
	int n = 0;
	int m = 0;
	int k = 0;
	cin >> n;
	cin >> m;
	cin >> k;
	if (k < n * m && ((k % n) == 0) || (k % m == 0)) 
	{
		cout << "YES";
	}
	else
	{
		cout << "NO";
	}
	

	return EXIT_SUCCESS;
}