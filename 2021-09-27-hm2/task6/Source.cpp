#include <iostream>

using namespace std;

int main()
{
	int a, b, c, d ;
	cin >> a;
	cin >> b;
	cin >> c;
	cin >> d;
	if ((a - c) == (b - d ) || a == c || b == d) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}
	
	return EXIT_SUCCESS;
}