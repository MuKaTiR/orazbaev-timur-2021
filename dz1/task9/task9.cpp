
#include <iostream>

using namespace std;

int main()
{
	int x = 0;
	cin >> x;
	int y = x * x;
	cout << y * (y + x) + y + x + 1;
	 
	return EXIT_SUCCESS;
}

