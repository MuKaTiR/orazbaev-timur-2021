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
	if ((n + m > k) && (m + k > n) && (k + n > m))
	{
		if ((m*m + k * k == n * n || m * m + n * n == k * k || n * n + k * k == m * m)) 
		{
			cout << "right";
		}
		else 
		{
			if (n*n + m*m > k*k || n*n + k*k > m*m || k*k + m*m > n*n )
			{
				cout << "acute";
			}
			else
			{
				if (k*k + n * n < m*m || k * k + m * m < n*n || m * m + n * n < k*k)
				{
					cout << "obtuse";
				}
				else
				{
					cout << "impossible";
				}
			}
		}
	}


	return EXIT_SUCCESS;
}