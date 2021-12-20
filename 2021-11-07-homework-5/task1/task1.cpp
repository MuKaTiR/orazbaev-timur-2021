
#include <iostream>

using namespace std;

int main()
{
	int x = 0;
	int y = 0;
	int h = 0;

	cin >> x >> y;
	cin >> h;

	h = h ^ ((1 << x) | (1 << y));

	cout << h;
	return EXIT_SUCCESS;



}

