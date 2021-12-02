#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
	int n = 0;
	n = 20;
	int* arr = new int[n];

	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
	}

	for (int i = n; i >= 0; --i)
	{
		cout << arr[i] << endl;
		
	}
	return EXIT_SUCCESS;
}