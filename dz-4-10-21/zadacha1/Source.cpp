
#include <iostream>

 using namespace std;

int main()
{
	int c, n, f;
	f = 1;
	c = 1;
	cin >> n;
	while (c <= n)
	{
		
		f = f * c;
		c = c + 1;
	}

	cout << f;

	return EXIT_SUCCESS;

}
