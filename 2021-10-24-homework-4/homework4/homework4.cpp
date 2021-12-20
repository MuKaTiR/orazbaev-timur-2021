#include <iostream>

using namespace std;

int main()
{
	int n = 0;
	cin >> n;

	int* arr = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	cout << "ARRAY : ";
	for (int i = 0; i < n; i++)
	{
		cout <<  arr[i] << " ";
	}
	cout << endl;
	cout << "EVEN : ";
	for (int i = 0; i < n; i++)
	{
		if (arr[i] % 2 == 0)
		{
			cout << arr[i] << " ";
		}
	}
	cout << endl;
	cout << "SUM : ";
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		count += arr[i];
	}
	cout << count ;
	cout << endl;
	cout << "PRODUCT OF NEGATIVE : ";
	int proizvedenie_minus = 1;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < 0)
		{
			proizvedenie_minus *= arr[i];
		}
	}
	cout << proizvedenie_minus;
	cout << endl;
	cout << "FIRST MIN INDEX : ";

	int min = arr[0];
	int min_i = 0;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
			min_i = i;
		}
	}
	cout << min_i;
	cout << endl;
	cout << "FIRST MIN INDEX : ";
	int max = arr[0];
	int max_i = 0;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
			max_i = i;
		}
	}
	int max2 = min;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max2 && i != max_i)
		{
			max2 = arr[i];
		}
	}
	cout << max2;
	cout << endl;
	cout << "REVERSE : ";
	for (int i = n - 1; i >= 0; i--)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	cout << "ODD INDEXES : ";
	for (int i = 0; i < n; i++)
	{
		if (i % 2 != 0)
		{
			cout << arr[i] << " ";
		}
	}
}

