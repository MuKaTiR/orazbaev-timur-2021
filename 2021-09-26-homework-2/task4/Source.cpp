#include <iostream>

using namespace std;

int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int x = 0;
	cin >> a;
	cin >> b;
	cin >> c;
	cin >> d;
	if (a == 0 && b == 0)
	{
		cout << "INF";
	}
	else {
		if (a == 0 || b * c == a * b) 
		{
			cout << "NO";
		}
		else 
		{
			if (b % a == 0)
			{
				x = -b / a;
				cout << x;
			}
			else
			{
				cout << "NO";
			}
		}
	}

	return EXIT_SUCCESS;
}