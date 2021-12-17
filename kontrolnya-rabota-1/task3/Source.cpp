using namespace std;
#include <iostream>

int main()
{
	int a = 0;
	int b = 0;
	int r = 0;
	int max = 0;
	int i = 0;

	cin >> a >> b;

	
	max = a;
	if (b < a)max = b;
	for (i = max; i > 0; i--)
		if (a%i == 0 && b%i == 0)break;
	
	cout << (a * b) / i;

	

}
