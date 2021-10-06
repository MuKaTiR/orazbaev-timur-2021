
#include <iostream>
 
using namespace std;

int main()
{
	int a = 0;
	int b = 0;

	cin >> a >> b;

	int c = a - b;
	int d = (2 * c + 1) % 2;
	int e = (d + 1) % 2 + (d + 1) / 2;
	cout << e * a + (1 - e) * b;
}

