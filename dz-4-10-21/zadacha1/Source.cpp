
#include <iostream>

 using namespace std;

int main()
{
	int c = 1;
	int n = 0;
	int f = 1;

	cin >> n;

	while (c <= n)
	{
		
		f = f * c;
		c = c + 1;
	}

	cout << f;

	return EXIT_SUCCESS;

}
