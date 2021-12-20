#include <iostream>
using namespace std;

int main()
{
	int x = 0;
	cin >> x;

	int y = x >> 31;
	cout << (y^x) - x;


	return EXIT_SUCCESS;

	
}
