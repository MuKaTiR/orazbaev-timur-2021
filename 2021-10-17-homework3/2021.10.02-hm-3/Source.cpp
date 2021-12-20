#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
	int n = 0;
	cin >> n;
	int a = 1;
	while (n > 1)
	{
		a *= n;
		--n;
	}

	cout << a;

	return EXIT_SUCCESS;
}