#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
	int k = 0;
	int r = 0;
	int l = 0;
	int mid = 0;
	char  vvod{};
	int a = 0;


	r = 1000000000;
	a = r / 2;
	l = 1;
	mid = r / 2;
	cout << a;
	while (cin >> vvod && vvod != '=')
	{
		if (vvod == '>')
		{
			l = mid;
		}
		else
		{
			r = mid;
		}
		mid = (l + r) / 2;
		cout << mid << endl;
	}

	

	return 0;

	return EXIT_SUCCESS;
}
