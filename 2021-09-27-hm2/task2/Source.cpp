#include <iostream>

using namespace std;

int main()
{
	int a = 0;
	cin >> a;
	if (a % 400 == 0)
	{
		cout << "YES";
	}
	else
	{
		if (a % 4 == 0 && a % 100 != 0)
		{
			cout << "YES";
		}
		else
		{
			cout << "NO";
		}
	}
	return EXIT_SUCCESS;
}