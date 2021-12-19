#include <iostream>
using namespace std;

int main()
{

	double x = 0; // 00 00 00 00 10 0F 0A 00
	cin >> x;
	long long* lp = (long long*)&x;

	long long l = *(lp);

	for (int i = 63; i >= 0; i--)
	{
		cout << ((l & (1LL << i)) != 0) ? 1 : 0;
	}

	// 011100
	// 100000
	// and
	// 000000 == 0

	// 011100
	// 010000
	// and
	// 010000 != 0

	return EXIT_SUCCESS;
}

