
#include <iostream>

using namespace std;

int main()
{
	int a, b;

	cin >> a >> b;
	for (int i = 0; i <= b; i++)
	{
		if (i * i >= a && i * i <= b) 
		{
			cout << i*i << " ";
		}
	}

return EXIT_SUCCESS;
}
