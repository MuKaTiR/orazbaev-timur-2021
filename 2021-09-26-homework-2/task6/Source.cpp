#include <iostream>

using namespace std;

int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	cin >> a;
	cin >> b;
	cin >> c;
	cin >> d;
	if ( abs(a - c) == abs(b - d ) || a == c || b == d) 
	{
		cout << "YES";
	}
	else 
	{
		cout << "NO";
	}
	
	return EXIT_SUCCESS;
}